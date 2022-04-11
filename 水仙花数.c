#include <stdio.h>
#include <math.h> 

int main()
{
	int num;
	scanf("%d", &num);
	
	int number = 1;
	for(int i = 1; i < num; i++ )  //判断几位数 
	{ 
		number *= 10; 
	}
	
	int n = number;
	int j = 1* number;
	int judge = 0; 
	int k ;//计算每一位数的累加 
	int new_j;//用于计算每一位数 
	int judge_j = 0;
	
	for( j ; j< 10* number; j ++)  //遍历所有的三位数 
	{
		new_j = j; 
	//	printf("%d ", j);
		for( k = 1; k <num+1; k++)//分别计算每个三位数上的数字 
		{
			int d = new_j % 10 ;
			new_j /= 10;
			int last_j = new_j;
			int p = 1;
			for( p ; p < num ; p++)
			{
				last_j *= d;
			}
			judge_j += last_j ;
		}
	//	printf("* %d *", j);
		
		k = 1;
		
		if (judge_j == j)
			printf("%d\n", j);//判断是否满足条件 
	}
	
	
	return 0;
}
