#include <stdio.h>
#include <time.h>

int main()
{
	printf("program start\r\n");
	clock_t starttime;
	clock_t endtime;
	int a = 0;
	starttime = clock();
	a++;
	endtime = clock();
	printf("t0 = %0.9f, t1 = %0.9f\r\n", starttime, endtime);
	return 0;
}
