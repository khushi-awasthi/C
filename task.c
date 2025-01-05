// C program to find prime numbers in given range using functions
#include <stdio.h>
#include <conio.h>

void main()
{
	int a, b, c, r, n, i, f = 0;
	printf("Enter the  start limit:");
	scanf("%d", &a);
	printf("Enter last limit:");
	scanf("%d", &b);
	for (i = a; i <= b; i++)
	{
		for (c = 0; c <= a; c++)
			if ( i% c == 0)
			{
				f = f + 1;
			}
		if (f == 2)
		{
			printf("Prime");
		}
	}
}
