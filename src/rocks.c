#include <stdio.h>
#include <locale.h>
#include <libintl.h>
#include <crap/crap.h>

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

    crap();
    puts(_("One of the best build systems of all time!"));
    return 0;
}

