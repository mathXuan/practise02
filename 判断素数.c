#include <stdio.h>
/*求素数：构造一张表，留下的都是素数
1.令x=2
2.将2x,3x,4x直至ax<n的数标记为非素数
3.令x为下一个没有标记为非素数的数，重复2；直到所有的数都已经尝试完毕
伪代码：
欲构造n以内（不含）的素数表
1.开辟prime[n]，初始化其所有元素为1，prime[x]为1，表示x是素数  
2.令x=2
3.如果x是素数，则对于(i=2;x*i<n;i++)令prime[i*x]=0
4.令x++，如果x<n，重复3，否则结束 
*/
int main()
{
	const int maxNumber = 25;
	int isPrime[maxNumber];
	int i;
	int x;
	
	for ( i =0; i < maxNumber; i++)
	{
		isPrime[i] = 1; //所有的数都是1，每个位置上是素数 
	}
	
	/*
	//test
	printf("\t");
	for( i = 2; i < maxNumber; i++)
	{
		printf("%d\t",i);
	}
	printf("\n");
	//test
	*/
	
	for( x = 2; x < maxNumber; x++)
	{
		if(isPrime[x])  //如果是素数 
		{
			for( i = 2; i * x < maxNumber; x++)//所有的倍数都要标记 
			{
				isPrime[i*x] = 0;  //把所有素数的倍数都表示出来 
			}
		}
		//test
		/*printf("%d\t",x);
		for(i = 2; i <maxNumber; i++)
		{
			printf("%d\t", isPrime[i]);
		}
		printf("\n");
		//test
		*/
	}
	
	for( i = 2; i < maxNumber; i++)
	{
		if(isPrime[i])
		{
			printf("%d\t",i);
		}
	}
	printf("\n");
	return 0;
}
