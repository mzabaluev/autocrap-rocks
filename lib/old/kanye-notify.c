#include "kanye-notify.h"

#include <stdio.h>
#include <libnotify/notify.h>

#include "config.h"
#include "l10n.h"

static NotifyNotification *current_notification = NULL;

static void kanye_notification_clear()
{
    gpointer obj = current_notification;
    if (obj != NULL) {
        current_notification = NULL;
        g_object_unref(obj);
    }
}

void kanye_notify_init()
{
    notify_init(PACKAGE);
}

void kanye_notify_uninit()
{
    kanye_notification_clear();
    notify_uninit();
}

static void kanye_notification_closed(NotifyNotification *notification,
                                      gpointer user_data)
{
    g_assert(current_notification == NULL || notification == current_notification);
    g_debug("notification closed");
    kanye_notification_clear();
}

void kanye_notify(const char *message)
{
    GError *error = NULL;

    static const char* notification_title = NULL;

    if (notification_title == NULL) {
        notification_title = _("Kanye on da mic");
    }

    if (current_notification == NULL) {
        current_notification = notify_notification_new(notification_title,
                message, NULL);
        notify_notification_set_urgency(current_notification,
                NOTIFY_URGENCY_LOW);
        g_signal_connect(current_notification, "closed",
                G_CALLBACK(kanye_notification_closed), NULL);

        g_debug("posting notification: [\n%s\n]", message);

        if (!notify_notification_show(current_notification, &error)) {
            fprintf(stderr, "Kanye couldn't get the word out: %s\n",
                    error->message);
            g_error_free(error);
        }
    } else {
        gchar *old_body = NULL;
        gchar *updated_body;

        g_object_get(current_notification, "body", &old_body, NULL);
        updated_body = g_strdup_printf("%s\n%s", old_body, message);

        g_debug("updating notification to: [\n%s\n]", updated_body);

        notify_notification_update(current_notification, notification_title,
                updated_body, NULL);
        if (!notify_notification_show(current_notification, &error)) {
            fprintf(stderr, "Kanye couldn't get the word out: %s\n",
                    error->message);
            g_error_free(error);
        }

        g_free(updated_body);
        g_free(old_body);
    }
}

