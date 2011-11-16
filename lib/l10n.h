#ifndef AUTOCRAP_L10N_H_
#define AUTOCRAP_L10N_H_

#ifdef ENABLE_NLS

#include <libintl.h>

#define _(str) dgettext(PACKAGE, str)

#else

#define _(str) (str)

#endif

#endif  /* AUTOCRAP_L10N_H_ */
