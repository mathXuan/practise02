#include <stdio.h>

int main()
{
	for (int i = 4; i > 0; i--)
	{
		for(int j = 1; j <=i; j++)
		{
			printf("*\t");
			if(j ==i)
			{
				printf("\n");
			}
		}
	}
	return 0;
}
