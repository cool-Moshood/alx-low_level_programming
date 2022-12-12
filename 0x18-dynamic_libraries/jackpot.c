#include <unistd.h>
#include <string.h>

int rand()
{
	static int ck = -1;

	ck++;
	if (ck == 0)
		return 8;
	if (ck == 1)
		return 8;
	if (ck == 2)
		return 7;
	if (ck == 3)
		return 9;
	if (ck == 4)
		return 23;
	if (ck == 5)
		return 74;
	return ck * ck % 30000;
}
