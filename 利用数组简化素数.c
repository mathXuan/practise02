#include <stdio.h>
//�ж�x�Ƿ�Ϊ���������ñ�xС���������ж�
//���Ҫ�������ȹ���һ�������� 
int isPrime( int x, int knownPrimes[], int numbeofKnownPrimes);

int main()
{
	const int number = 10;
	int prime[10] = {2}; //��ʼ��Ϊ2����֪�ĵ�һ������ 
	int count = 1;//��Ϊ�Ѿ�����һ�� 
	int i = 3; //��3��ʼ����3�ǲ������� 
	
	//�������
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
			prime[count++] = i; //��仰��������������1.���Ȱ������λ�ú��ƶ� 2.�������������λ���� 
		}
		//�������Ե������
		/*
		{
			printf("i = %d\tcnt=%d\t", i, count);
			int i; //��Ϊ���Դ�����{} ͬ����i ����Ӱ�챾����
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
