#include <stdio.h>
//#include <math.h> 

int main()
{
	/*
	int num;
	scanf("%d", &num);
	
	int number = 1;
	for(int i = 1; i < num; i++ )  //�жϼ�λ�� 
	{ 
		number *= 10; 
	}
	
	int j = 1 * number;  //��ʼ�����ĵ�һ����
	 
	for(j; j < number * 10; j++)
	{
		int new_j = j; //�ֱ���ÿһλ��ʱ����ƻ��������Ӧ�����¸�ֵ
		int judge = 0; //�ж��ۼƺ�
		/*for(int k = 1; k < num + 1; k++)//�ֱ����ÿһλ�� 
		//��һ������ʦ��һ�� 
		{
			int d = new_j % 10;
			new_j /= 10; 
			judge += pow( new_j, num);
		 } */
	/*	 int k =1;
		 do
		 {
		    int d = new_j % 10;
			new_j /= 10; 
			int m = 1;
			int p = d;
			while( j < num)
			{
				p*= d;
				m++;
			}
			judge += p;
			
		 }while(new_j > 0);
		 
		if(new_j == j)
		{
			printf("%d\n", j);
		 } 
		
	}  */
	
	int n;
	scanf ("%d", &n );
	
	int first = 1;
	int i = 1;
	while( i<n )
	{
		first *= 10;
		i++;
	}
	
	i = first;
	while ( i<first*10)
	{
		int t = i;
		int sum = 0;
		do
		{
			int d = t%10;
			t/10;
			int p = d;
			int j = 1;
			while (j<n)
			{
				p*= d;
				j++;
			}
			sum +=p;
		}while(t>0);
		if (sum == i)
		{
			printf("%d\n", i);
		}
		i++;
	}
	return 0;
 } 
