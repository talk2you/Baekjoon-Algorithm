#include <stdio.h>

int main()
{
	long a, b;
	while(1)
	{
        if(scanf("%ld %ld", &a, &b) == EOF)
            break;
		printf("%d\n", a +b);

	}
}
