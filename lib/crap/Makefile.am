lib_LTLIBRARIES = libcrap.la

libcrap_la_LDFLAGS = -version-info 0:0:0

libcrap_la_LIBADD = ../old/libold.la

libcrap_la_SOURCES = crap.c

libcrap_includedir = $(includedir)/libcrap-1.0/crap

libcrap_include_HEADERS = crap.h

AM_CPPFLAGS = -I$(top_srcdir)/lib

pkgconfigdir = $(libdir)/pkgconfig
pkgconfig_DATA = crap.pc

