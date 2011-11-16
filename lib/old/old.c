#include "old.h"
#include <stdio.h>

#include "config.h"
#include "l10n.h"

static int old_initialized = 0;

static void old_init()
{
#ifdef ENABLE_NLS
    bindtextdomain(PACKAGE, LOCALEDIR);
#endif
    old_initialized = 1;
}

void old()
{
    if (!old_initialized) {
        old_init();
    }

    puts(_("Yo, makefile writer, I'm really happy for you and I'mma let you finish,"));
}

