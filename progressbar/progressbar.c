#include<stdio.h>

int main()
{
	char bar[100] = {};
	const char str[] = "|/-\\";
	int i;

	for (i=0; i<100; i++)
	{
		bar[i] = '#';
		printf("[%-100s][%d%%][%c]\r", bar, i + 1, str[i % 4]);
		fflush(stdout);
		usleep(5000);
	}

	printf("\n");

	return 0;
}
