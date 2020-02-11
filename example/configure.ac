AC_INIT([example], [0.0.0])
AC_CONFIG_HEADERS([config.h])

CPPFLAGS="-I. ${CPPFLAGS}"

AC_PROG_CC_STDC
AC_PROG_INSTALL

AC_CHECK_HEADERS([dlfcn.h])
AC_CHECK_LIB([dl], [dlopen])

AC_DEFINE([MY_VAR1], ["myvar1"], [This is MY_VAR1])

AC_SUBST([MY_VAR2], [myvar2])

AC_OUTPUT([
	Makefile
	README.md
])
