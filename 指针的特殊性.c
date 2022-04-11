#include <stdio.h>

/*
返回值仍然是5,6因为ab的值并没有换
函数调用一般只是要一个新的结果 
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
//调用指针才能将函数本身的数字改变 
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
