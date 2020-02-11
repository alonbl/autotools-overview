AC_INIT([example], [0.0.0])
AM_INIT_AUTOMAKE
AC_CONFIG_HEADERS([config.h])

AC_PROG_CC_STDC
AC_PROG_RANLIB

AC_ARG_ENABLE(
	[dynamic],
	[AS_HELP_STRING([--enable-dynamic], [Enable dynamic])],
	[
		AS_IF(
			[test "${enable_dynamic}" = "yes"],
			[
				AC_CHECK_HEADERS([dlfcn.h],, [AC_MSG_ERROR([Cannot find ${ac_header}])])
				AC_CHECK_LIB([dl], [dlopen],, [AC_MSG_ERROR([Cannot find dl library])])
			]
		)
	],
	[enable_dynamic=no]
)
AC_DEFINE_UNQUOTED([ENABLE_DYNAMIC], [`test "${enable_dynamic}" = "yes" && echo 1 || echo 0`], [Dynamic is enabled])

AC_DEFINE([MY_VAR1], ["myvar1"], [This is MY_VAR1])

AC_SUBST([MY_VAR2], [myvar2])

AC_OUTPUT([
	Makefile
	README.md
])
