#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#ifdef STDC_HEADERS
#include <stdio.h>
#include <stdlib.h>
#endif

#include "common.h"

int main() {
	printf("Checking common_foo\n");
	if (common_foo() != 0) {
		fprintf(stderr, "common_foo() is expected to return 0\n");
		exit(1);
	}

	exit(0);
}
