#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#ifdef _WIN32
#include <windows.h>
#endif

#ifdef STDC_HEADERS
#include <stdio.h>
#endif

#ifdef HAVE_DLFCN_H
#include <dlfcn.h>
#endif

#include "common.h"

int main() {

#if ENABLE_DYNAMIC
#ifdef _WIN32
	LoadLibraryA("test.dll");
#elif defined(HAVE_DLFCN_H)
	dlopen("test.so", RTLD_NOW);
#else
#error Cannot determine dynamic method
#endif
#endif

	printf("The value of '%s' is '%s'\n", "MY_VAR1", MY_VAR1);

	common_foo();

	return 0;
}
