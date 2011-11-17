check_PROGRAMS = test-kanye test-old test-crap

TESTS = $(check_PROGRAMS)

test_kanye_SOURCES = kanye-test.c

test_kanye_LDADD = ../lib/old/libold.la

test_old_SOURCES = old-test.c

test_old_LDADD = ../lib/old/libold.la

test_crap_SOURCES = crap-test.c

test_crap_LDADD = ../lib/crap/libcrap.la

AM_CPPFLAGS = -I$(top_srcdir)/lib

