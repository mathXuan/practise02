#include <stdio.h>

int main()
{
	int a,n;
	scanf("%d %d", &a,&n);
	
	int sum = 0;
	//int t = 0;//Ŀ��Ч��ͬ int single = a;��ÿ���� 
	for(int i = 1; i <= n ; i++)
	{
		int single = a;
		for(int j = 1; j < i; j++)
		{
			single = 10 * single + a;
		}
		sum += single;
	}
	//�븴���ˣ�һ��ѭ��������ɣ�ÿ�μ���һ������Ȼ����� 
	
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
