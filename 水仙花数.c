#include <stdio.h>
#include <math.h> 

int main()
{
	int num;
	scanf("%d", &num);
	
	int number = 1;
	for(int i = 1; i < num; i++ )  //�жϼ�λ�� 
	{ 
		number *= 10; 
	}
	
	int n = number;
	int j = 1* number;
	int judge = 0; 
	int k ;//����ÿһλ�����ۼ� 
	int new_j;//���ڼ���ÿһλ�� 
	int judge_j = 0;
	
	for( j ; j< 10* number; j ++)  //�������е���λ�� 
	{
		new_j = j; 
	//	printf("%d ", j);
		for( k = 1; k <num+1; k++)//�ֱ����ÿ����λ���ϵ����� 
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
			printf("%d\n", j);//�ж��Ƿ��������� 
	}
	
	
	return 0;
}
