#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	
	for(int i = 1; i < n + 1; i++) //输入公式 
	{
		for(int j =1; j < i+1; j++)
		{
			printf("%d*%d=%d", i, j, i*j );
		/*	if( i < n )
				{
					printf(" ");
				}
				else//输入转折 
				{
					printf("\n");
				}
		*/
		//错误原因是 \n的位置不对，应该放在外面的循环里面 
		//输入不同类型的数字要保证同一行 
		if( i*j < 10)
		{
			printf("   ");
		}else
		{
			printf(" ");
		}
	
	    }
	    
	    printf("\n");
	}
	return 0;
}
