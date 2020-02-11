#ifdef STDC_HEADERS
#include <stdio.h>
#endif

#ifdef HAVE_DLFCN_H
#include <dlfcn.h>
#endif

#include "common.h"

int main() {

#if HAVE_DLFCN_H
	dlopen("test.so", RTLD_NOW);
#endif

	printf("The value of '%s' is '%s'\n", "MY_VAR1", MY_VAR1);

	common_foo();

	return 0;
}
