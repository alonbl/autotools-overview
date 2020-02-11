#include <stdio.h>

#include "common.h"

int main() {
	printf("The value of '%s' is '%s'\n", "MY_VAR1", MY_VAR1);

	common_foo();

	return 0;
}
