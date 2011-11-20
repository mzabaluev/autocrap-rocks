lib_LTLIBRARIES = libold.la

libold_la_LDFLAGS = -version-info 1:0:1

libold_la_LIBADD = ../../kanye/kanye/libkanye.la @LTLIBINTL@

libold_la_SOURCES = old.c

libold_includedir = $(includedir)/libold-1.0/old

libold_include_HEADERS = old.h

AM_CPPFLAGS = \
	-I$(top_srcdir)/lib -I$(top_srcdir)/kanye \
	-DLOCALEDIR=\"$(localedir)\"

pkgconfigdir = $(libdir)/pkgconfig
pkgconfig_DATA = old.pc

