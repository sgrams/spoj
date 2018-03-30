#include <unistd.h>
int main (void)
{
	alarm(1);
	return sleep(1);
}
