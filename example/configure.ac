AC_INIT([example], [0.0.0])
AM_INIT_AUTOMAKE
AC_CONFIG_HEADERS([config.h])
AC_CONFIG_MACRO_DIRS([m4])

LIBCOMMON_LT_CURRENT="0"
LIBCOMMON_LT_OLDEST="0"
LIBCOMMON_LT_REVISION="0"
LIBCOMMON_LT_AGE="$((${LIBCOMMON_LT_CURRENT}-${LIBCOMMON_LT_OLDEST}))"
AC_SUBST([LIBCOMMON_LT_CURRENT])
AC_SUBST([LIBCOMMON_LT_REVISION])
AC_SUBST([LIBCOMMON_LT_AGE])
AC_SUBST([LIBCOMMON_LT_OLDEST])

AC_PROG_CC_STDC
AC_PROG_LIBTOOL
AC_CANONICAL_HOST

AS_CASE([${host}],
	[*-*-mingw*], [CPPFLAGS="${CPPFLAGS} -DWIN32_LEAN_AND_MEAN"]
)

AC_ARG_ENABLE(
	[dynamic],
	[AS_HELP_STRING([--enable-dynamic], [Enable dynamic])],
	[
		AS_IF(
			[test "${enable_dynamic}" = "yes"],
			[AS_CASE([${host}],
				[*-*-mingw*],,
				[*-*-linux-*], [
					AC_CHECK_HEADERS([dlfcn.h],, [AC_MSG_ERROR([Cannot find ${ac_header}])])
					AC_CHECK_LIB([dl], [dlopen],, [AC_MSG_ERROR([Cannot find dl library])])
				],
				[AC_MSG_ERROR([Unsupported platform for dynamic])]
			)]
		)
	],
	[AS_CASE([${host}],
		[*-*-mingw*],[enable_dynamic=yes],
		[enable_dynamic=no]
	)]
)
AC_DEFINE_UNQUOTED([ENABLE_DYNAMIC], [`test "${enable_dynamic}" = "yes" && echo 1 || echo 0`], [Dynamic is enabled])

AC_DEFINE([MY_VAR1], ["myvar1"], [This is MY_VAR1])

AC_SUBST([MY_VAR2], [myvar2])

AC_OUTPUT([
	Makefile
	README.md
])
