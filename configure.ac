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

AC_ARG_VAR([CFLAGS_INTERNAL],
  [C compiler flags to use with internally linked modules])
if test "$GCC" = 'yes'; then
  test -n "$CFLAGS_INTERNAL" || CFLAGS_INTERNAL='-fvisibility=hidden'
fi

AM_GNU_GETTEXT([external])
AM_GNU_GETTEXT_VERSION([0.18])

PKG_PROG_PKG_CONFIG

dnl Dependency checks, optional features
AC_ARG_WITH([libnotify],
  [AS_HELP_STRING([--with-libnotify],
     [use libnotify API as an output backend [default=auto]])],
  [],
  [with_libnotify=auto])
if test "$with_libnotify" = 'no'; then
  have_libnotify=no
else
  PKG_CHECK_MODULES([NOTIFY], [libnotify >= 0.7],
    [have_libnotify=yes], [have_libnotify=no])
  if test "$have_libnotify" = 'yes'; then
    AC_DEFINE([HAVE_LIBNOTIFY], [1], [Define if you have libnotify])
  else
    case $with_libnotify in
      yes)
        AC_MSG_ERROR([$NOTIFY_PKG_ERRORS])
        ;;
      auto)
        AC_MSG_WARN([Kanye will not be able to storm your screen!])
        ;;
    esac
  fi
fi
AM_CONDITIONAL([KANYE_NOTIFY], [test "$have_libnotify" = 'yes'])

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

