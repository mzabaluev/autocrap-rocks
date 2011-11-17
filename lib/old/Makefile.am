lib_LTLIBRARIES = libold.la

libold_la_LDFLAGS = -version-info 1:0:1

libold_la_LIBADD = @LTLIBINTL@

libold_la_SOURCES = old.c kanye.c

libold_includedir = $(includedir)/libold-1.0/old

libold_include_HEADERS = old.h kanye.h

AM_CPPFLAGS = -I$(top_srcdir)/lib -DLOCALEDIR=\"$(localedir)\"

if KANYE_NOTIFY

noinst_LTLIBRARIES = libkanye-notify.la

libkanye_notify_la_SOURCES = kanye-notify.c kanye-notify.h

libkanye_notify_la_CPPFLAGS = $(AM_CPPFLAGS) $(NOTIFY_CFLAGS) -DG_LOG_DOMAIN=\"$(PACKAGE)/kanye\"
libkanye_notify_la_CFLAGS = -fvisibility=hidden
libkanye_notify_la_LIBADD = $(NOTIFY_LIBS)

libold_la_LIBADD += libkanye-notify.la

endif

pkgconfigdir = $(libdir)/pkgconfig
pkgconfig_DATA = old.pc

