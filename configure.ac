AC_PREREQ([2.60])
AC_INIT([autocrap-rocks], [1.0])

AC_CONFIG_HEADERS([config.h])
AC_CONFIG_MACRO_DIR([m4])
AM_INIT_AUTOMAKE([foreign silent-rules color-tests])
LT_INIT([disable-static])

dnl Cross-compilation support
AC_CANONICAL_BUILD
AC_CANONICAL_HOST

dnl Checks for tools
AC_PROG_CC

AM_GNU_GETTEXT([external])
AM_GNU_GETTEXT_VERSION([0.18])

dnl Dependency checks, optional features
KANYE_CHECK_IT_OUT

AC_CONFIG_FILES([
  Makefile
  lib/Makefile
  lib/old/Makefile
  lib/old/old.pc
  lib/crap/Makefile
  lib/crap/crap.pc
  po/Makefile.in
  src/Makefile
  tests/Makefile
])
AC_CONFIG_SUBDIRS([kanye])
AC_OUTPUT