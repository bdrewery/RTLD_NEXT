#include <dlfcn.h>
#include <stdio.h>

void lib1(void)
{
	void(*lib1_fn)(void);

	lib1_fn = dlfunc(RTLD_NEXT, "lib1");
	if (lib1_fn == lib1) {
		printf("FAIL: lib1_fn=%p matches itself lib1=%p\n", lib1_fn, &lib1);
	} else
		printf("PASS: lib1_fn=%p does not match itself lib1=%p\n", lib1_fn, &lib1);
}
