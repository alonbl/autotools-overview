AUTOMAKE_OPTIONS = foreign

MAINTAINERCLEANFILES =
include Makefile.clean.inc

EXTRA_DIST = \
	.gitignore \
	$(NULL)

bin_PROGRAMS = \
	prog1 \
	$(NULL)

lib_LIBRARIES = \
	libcommon.a \
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

prog1_SOURCES = \
	main.c \
	$(NULL)
prog1_LDADD = \
	libcommon.a \
	$(NULL)

libcommon_a_SOURCES = \
	common.c common.h \
	$(NULL)

test_common_test_SOURCES = \
	test-common.c \
	$(NULL)
test_common_test_LDADD = \
	libcommon.a \
	$(NULL)
