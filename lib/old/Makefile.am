lib_LTLIBRARIES = libold.la

libold_la_LDFLAGS = -version-info 0:0:0

libold_la_LIBADD = @LTLIBINTL@

libold_la_SOURCES = old.c

libold_includedir = $(includedir)/libold-1.0/old

libold_include_HEADERS = old.h

AM_CPPFLAGS = -I$(top_srcdir)/lib -DLOCALEDIR=\"$(localedir)\"

pkgconfigdir = $(libdir)/pkgconfig
pkgconfig_DATA = old.pc

