#include <stdio.h>

int main()
{
	int num;
	scanf("%d", &num);
	
	double sum = 0.0;
	double dividend = 2;//���� 
	int m ;//���� ������� 
	double divisor = 1; //��ĸ 
//	int n;//��ĸ ������� 
	double t;//��ʱ�������� 
	for( m = 1 ; m <= num ; m++)
	{
		//�Ѻ����ֵ�仯��ʱ��Ҫ�����һ���µ�ֵ ���ڽ��� 
		sum += dividend/divisor;   //sum����ǰ����Ϊ��һ��ֱ�ӳ�ȥ 
		t = dividend;
		dividend = dividend + divisor;
		divisor = t;
		
	/*	����Ҫ�����ѭ�������ʼ��ֵ��ÿ�μ�������һ�������� 
	i +=j;
		for( n = 0 ; n < num ; n++)
		{
			j = i;
		//	sum += 1.0 * (i/j); ��Ϊ���ʼ����������Ӧ��д�������ѭ���� 
		}
	*/
	}
	printf("%.2f\n", sum);
	
	return 0;
}
