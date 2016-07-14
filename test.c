#include <dlfcn.h>
#include <err.h>
#include <stdlib.h>

int main() {
	void *liblib1;
	void (*lib1_fn)(void);

	liblib1 = dlopen("liblib1.so", RTLD_NOW);
	if (liblib1 == NULL)
		err(1, "dlopen liblib1");
	lib1_fn = dlfunc(liblib1, "lib1");
	if (lib1_fn == NULL)
		err(1, "dlfunc lib1");
	lib1_fn();
	return (0);
}
