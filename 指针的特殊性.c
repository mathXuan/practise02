#include <stdio.h>

/*
����ֵ��Ȼ��5,6��Ϊab��ֵ��û�л�
��������һ��ֻ��Ҫһ���µĽ�� 
int swap( int a, int b);

int main()
{
	int a = 5;
	int b = 6;
	swap(a,b);
	printf("%d %d", a, b);
	
	return 0;
}

int swap( int a, int b)
{
	int t = a;
	a = b;
	b = t;
	return (a,b); 
}*/
//����ָ����ܽ�������������ָı� 
void swap(int *pa, int *pb);

int main()
{
	int a = 5;
	int b = 6;
	swap(&a,&b);
	printf("%d %d", a, b);
	
	return 0;
}

void swap(int *pa, int *pb)
{
	int t = *pa;
	*pa = *pb;
	*pb = t;
}
