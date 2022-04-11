#include <stdio.h>

int main()
{
	char ac[] = {0,1,2,3,4,5,6,7,8,9,-1};
	char *p = &ac[0];
	int i;
	/*遍历一个数组的循环表达方式 
	for ( i = 0; i < sizeof(ac)/sizeof(ac[0]); i++)
	{
		printf("%d\n",ac[i]);
	 } */
	 
	 /*遍历一个数组，利用指针循环 
	for( p = ac; *p != -1; p++)
	{
		printf("%d\n", *p);
	 } */
	 while (*p != -1)
	 {
	 	printf("%d\n", *p++);
	  } 
	return 0;
}
