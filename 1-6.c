#include "apue.h"
#include <sys/wait.h>

int
main(void)
{
	printf("hello world from process ID %ld\n", (long)getpid());
	exit(0);
}
