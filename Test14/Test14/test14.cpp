#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int i = 3;
	
	printf("2\n");
	for(i=3;i<100;i=i+2)
	{
		int a = 1;
		int b = 1;
		for ( a = 2;a<i;a++)
		{
			if (i % a == 0)
			{
				b = 0;
				break;
			}
		}
		if (b == 1)
			{
				printf("%d\n", i);
		    }
		
			
		
		
	}

   return 0;
}