#include <stdio.h>
/*������������һ�ű����µĶ�������
1.��x=2
2.��2x,3x,4xֱ��ax<n�������Ϊ������
3.��xΪ��һ��û�б��Ϊ�������������ظ�2��ֱ�����е������Ѿ��������
α���룺
������n���ڣ���������������
1.����prime[n]����ʼ��������Ԫ��Ϊ1��prime[x]Ϊ1����ʾx������  
2.��x=2
3.���x�������������(i=2;x*i<n;i++)��prime[i*x]=0
4.��x++�����x<n���ظ�3��������� 
*/
int main()
{
	const int maxNumber = 25;
	int isPrime[maxNumber];
	int i;
	int x;
	
	for ( i =0; i < maxNumber; i++)
	{
		isPrime[i] = 1; //���е�������1��ÿ��λ���������� 
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
		if(isPrime[x])  //��������� 
		{
			for( i = 2; i * x < maxNumber; x++)//���еı�����Ҫ��� 
			{
				isPrime[i*x] = 0;  //�����������ı�������ʾ���� 
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
