#include <stdio.h>

int main()
{
	int num;
	scanf("%d", &num);
	
	double sum = 0.0;
	double dividend = 2;//分子 
	int m ;//分子 计算次数 
	double divisor = 1; //分母 
//	int n;//分母 计算次数 
	double t;//临时变量交换 
	for( m = 1 ; m <= num ; m++)
	{
		//把后面的值变化的时候要求设出一个新的值 用于交换 
		sum += dividend/divisor;   //sum在最前面因为第一项直接出去 
		t = dividend;
		dividend = dividend + divisor;
		divisor = t;
		
	/*	不需要另外加循环，有最开始的值，每次计算后面的一个数即可 
	i +=j;
		for( n = 0 ; n < num ; n++)
		{
			j = i;
		//	sum += 1.0 * (i/j); 因为有最开始的情况，因此应该写在外面的循环里 
		}
	*/
	}
	printf("%.2f\n", sum);
	
	return 0;
}
