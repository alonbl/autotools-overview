AUTOMAKE_OPTIONS = foreign

MAINTAINERCLEANFILES =
include Makefile.clean.inc

EXTRA_DIST = \
	.gitignore \
	$(NULL)

bin_PROGRAMS = \
	prog1 \
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

TESTS = \
	$(MY_TESTS) \
	$(NULL)

prog1_SOURCES = \
	main.c \
	common.c common.h \
	$(NULL)
