#include <stdio.h>
//判断x是否为素数，利用比x小的素数来判断
//这就要求我们先构造一张素数表 
int isPrime( int x, int knownPrimes[], int numbeofKnownPrimes);

int main()
{
	const int number = 10;
	int prime[10] = {2}; //初始化为2，已知的第一个素数 
	int count = 1;//因为已经有了一个 
	int i = 3; //从3开始测试3是不是素数 
	
	//方便调试
	 /*
	{
		int i;
		printf("\t\t\t\t");
		for( i = 0; i < number; i++)
		{
			printf("%d\t", i );
		}
	 	printf("\n");
	} */
	  
	while( count < number)
	{
		if( isPrime(i, prime, count))
		{
			prime[count++] = i; //这句话的作用有两个：1.首先把数组的位置后移动 2.把素数放在这个位置上 
		}
		//用来测试的输出项
		/*
		{
			printf("i = %d\tcnt=%d\t", i, count);
			int i; //因为调试代码有{} 同样的i 不会影响本身函数
			for( i = 0; i < number; i++)
			{
				printf("%d\t", prime[i]);
			 } 
			 printf("\n");
		}*/
		
		i++;
	}
	
	for( i = 0; i < number; i++)
	{
		printf("%d", prime[i]);
		if((i+1)%5)
		{
			printf("\t");
		}else
		{
			printf("\n");
		}
	}
	return 0;
 } 
 
 int isPrime( int x, int knownPrimes[], int numbeofKnownPrimes)
 {
 	int ret = 1;
 	int i;
 	for( i = 0; i < numbeofKnownPrimes; i++)
 	{
 		if( x%knownPrimes[i] ==0)
 		{
 			ret = 0;
 			break;
		 }
	 }
	 return ret;
  } 
