#include <stdio.h>

int main()
{
	int dividend,divisor;
	scanf("%d/%d", &dividend,&divisor);
	
	int a = dividend;
	int b = divisor;
	int i;//зїЮЊгрЪ§ 
	if (dividend < divisor)
	{
		do
		{
			i =  a%b;
			a = b;
			b = i;
		}while(i==0);
		
		dividend = dividend/i;
		divisor = divisor/ i;
	}
	
	printf("%d/%d", dividend, divisor);
	
	return 0;
 } 
