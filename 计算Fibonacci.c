#include <stdio.h>
//Fibonacci
int main()
{
	//ÀûÓÃÑ­»·
	/*
	int f1 = 1, f2 = 1, f3;
	int i;
	
	for(i = 1; i <= 38; i++)
	{
		f3 = f1 + f2;
		printf("%d ",f3);
		f1 = f2;
		f2 = f3;
	 } */
	int i;
	int f[20] = {1,1};
	
	for( i =2; i<20; i++)
	    f[i] = f[i-2] + f[i-1];
	
	for( i = 0; i<20; i++)
	{
		if(i%5 == 0)printf("\n");
		printf("%12d ",f[i]);
	}
	printf("\n");
	
	return 0;
 } 
