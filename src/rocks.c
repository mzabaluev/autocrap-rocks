#include <stdio.h>
#include <locale.h>
#include <libintl.h>

#include <crap/crap.h>
#include <old/kanye.h>

#include "config.h"

#ifdef ENABLE_NLS
#define _(str) gettext(str)
#else
#define _(str) (str)
#endif

int main()
{
    setlocale(LC_ALL, "");
#ifdef ENABLE_NLS
    bindtextdomain(PACKAGE, LOCALEDIR);
    textdomain(PACKAGE);
#endif

    kanye_storm_stage();

    crap();
    kanye(_("One of the best build systems of all time!"));

    kanye_drag_off_stage();
    return 0;
}

