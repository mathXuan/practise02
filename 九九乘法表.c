#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	
	for(int i = 1; i < n + 1; i++) //���빫ʽ 
	{
		for(int j =1; j < i+1; j++)
		{
			printf("%d*%d=%d", i, j, i*j );
		/*	if( i < n )
				{
					printf(" ");
				}
				else//����ת�� 
				{
					printf("\n");
				}
		*/
		//����ԭ���� \n��λ�ò��ԣ�Ӧ�÷��������ѭ������ 
		//���벻ͬ���͵�����Ҫ��֤ͬһ�� 
		if( i*j < 10)
		{
			printf("   ");
		}else
		{
			printf(" ");
		}
	
	    }
	    
	    printf("\n");
	}
	return 0;
}
