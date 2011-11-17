AC_PREREQ([2.60])
AC_INIT([autocrap-rocks], [1.0])

AC_CONFIG_HEADERS([config.h])
AC_CONFIG_MACRO_DIR([m4])
AM_INIT_AUTOMAKE([foreign silent-rules color-tests])
LT_INIT([disable-static])

AC_CANONICAL_BUILD
AC_CANONICAL_HOST

AC_PROG_CC

AM_GNU_GETTEXT([external])
AM_GNU_GETTEXT_VERSION([0.18])

dnl Dependency checks
PKG_CHECK_MODULES([NOTIFY], [libnotify >= 0.7], [HAVE_LIBNOTIFY=yes], [HAVE_LIBNOTIFY=no])
if test "$HAVE_LIBNOTIFY" = 'yes'; then
  AC_DEFINE([HAVE_LIBNOTIFY], [1], [Define if you have libnotify])
else
  AC_MSG_WARN([Kanye will not be able to storm your screen!])
fi
AM_CONDITIONAL([KANYE_NOTIFY], [test "$HAVE_LIBNOTIFY" = 'yes'])

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
AC_OUTPUT

