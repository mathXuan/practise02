#include <stdio.h>
//数字的拼装 
int main()
{
	int a;
	scanf("%d", &a);
	
	//需要计算三位数的每一位 ，三种循环
	
	int i,j,k;
	int cnt = 0;
	for(i=a; i <= a+3 ; i++)
	{
		for(j=a; j<= a+3; j++)
		{
			for(k=a; k<= a+3; k++)
			{
				if(i!=j)
				{
					if(i!=k)
					{
						if(j!=k)
						{
							printf("%d", 100*i+10*j+k);
							cnt++;
							if(cnt%6!=0)
							{
								printf(" ");
							}else if(cnt%6==0)
							{
								printf("\n");
							}
							/*方法2
							if(cnt == 6)
							{
								printf("\n");
								cnt = 0;
							}else 
							{
								printf(" ");
							}
							*/
						}
					}
				}
			}
		}
	}
	 
	return 0;
}
