#include <stdio.h>
#include <stdint.h>
#include <time.h>

int main()
{
	printf("program start\r\n");
	printf("clock per second = %ld\r\n", CLOCKS_PER_SEC);
	long tt[3];
	tt[0] = clock();
	sleep(1);
	tt[1] = clock();
	sleep(3);
	tt[2] = clock();
	int i ;
	for(i = 0; i < 3; i++)
	{
		printf("t[%d] = %ld\r\n", i, tt[i]);
	}
	printf("t2 - t1 = %ld\r\n", tt[2] - tt[1]);
	printf("t1 - t0 = %ld\r\n", tt[1] - tt[0]);

	return 0;
}
