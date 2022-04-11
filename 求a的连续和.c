#include <stdio.h>

int main()
{
	int a,n;
	scanf("%d %d", &a,&n);
	
	int sum = 0;
	//int t = 0;//目标效果同 int single = a;算每个数 
	for(int i = 1; i <= n ; i++)
	{
		int single = a;
		for(int j = 1; j < i; j++)
		{
			single = 10 * single + a;
		}
		sum += single;
	}
	//想复杂了，一个循环即可完成，每次计算一个新数然后相加 
	
/*	int i;
	// 0*10+2 2*10+2 (2*10+2)*10+2
	for (i = 0; i < n; i++)
	{
		t = t*10 + a;
		sum += t;
	}*/
	printf("%d", sum);
	return 0;
 } 
