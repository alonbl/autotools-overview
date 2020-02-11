AUTOMAKE_OPTIONS = foreign
ACLOCAL_AMFLAGS = -I m4

MAINTAINERCLEANFILES =
include Makefile.clean.inc

EXTRA_DIST = \
	.gitignore \
	$(NULL)

bin_PROGRAMS = \
	prog1 \
	$(NULL)

lib_LTLIBRARIES = \
	libcommon.la \
	$(NULL)

doc_DATA = \
	README.md \
	$(NULL)

MY_TESTS = \
	test-sanity.sh \
	$(NULL)

dist_noinst_DATA = \
	$(MY_TESTS) \
	$(NULL)

check_PROGRAMS = \
	test-common.test \
	$(NULL)

TESTS = \
	$(MY_TESTS) \
	$(check_PROGRAMS) \
	$(NULL)

SUBDIRS = po

prog1_SOURCES = \
	main.c \
	$(NULL)
prog1_LDADD = \
	libcommon.la \
	$(LTLIBINTL) \
	$(NULL)

libcommon_la_SOURCES = \
	gettext.h \
	common.c common.h \
	libcommon.exports \
	$(NULL)
libcommon_la_LDFLAGS = \
	$(AM_LDFLAGS) \
	-version-info @LIBCOMMON_LT_CURRENT@:@LIBCOMMON_LT_REVISION@:@LIBCOMMON_LT_AGE@ \
	-export-symbols "$(srcdir)/libcommon.exports" \
	-no-undefined \
	$(NULL)

test_common_test_SOURCES = \
	test-common.c \
	$(NULL)
test_common_test_LDADD = \
	libcommon.la \
	$(NULL)

update-po:
	cd po && $(MAKE) $(AM_MAKEFLAGS) update-po
