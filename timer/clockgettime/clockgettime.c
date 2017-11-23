#include <stdio.h>
#include <stdint.h>
#include <time.h>

uint32_t getBaseTime()
{
	struct timespec ts;
	clock_gettime(CLOCK_MONOTONIC, &ts);
	return (ts.tv_sec*1000 + ts.tv_nsec/1000000);
}

int main()
{
	printf("program start\r\n");
	long tt[3];
	tt[0] = getBaseTime();
	sleep(1);
	tt[1] = getBaseTime();
	sleep(2);
	tt[2] = getBaseTime();
	int i ;
	for(i = 0; i < 3; i++)
	{
		printf("t[%d] = %ld\r\n", i, tt[i]);
	}
	printf("t2 - t1 = %ld\r\n", tt[2] - tt[1]);
	printf("t1 - t0 = %ld\r\n", tt[1] - tt[0]);

	return 0;
}
