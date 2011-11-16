#include "crap.h"

#include <stdio.h>

#include <old/old.h>

#include "config.h"
#include "l10n.h"

static int crap_initialized = 0;

static void crap_init()
{
#ifdef ENABLE_NLS
    bindtextdomain(PACKAGE, LOCALEDIR);
#endif
    crap_initialized = 1;
}

void crap()
{
    if (!crap_initialized) {
        crap_init();
    }

    old();
    puts(_("but autotools are one of the best build systems of all time."));
}

