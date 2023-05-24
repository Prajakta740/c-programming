#include<stdio.h>
int sum();
int main()
{
	int sum ();
	printf("\n all the arithmetic operations are follows:");
	sum();
	return 0;
}
int sum()
{
	int a=10,b=20,res;
	float div;
	res=a+b;
	printf("\n%d+%d=%d",a,b,res);
	res=a-b;
	printf("\n%d-%d=%d",a,b,res);
	res=a*b;
	printf("\n%d*%d=%d",a,b,res);
	res=b/a;
	printf("\n%d/%d=%d",b,a,res);
	res=a%b;
	printf("\n%d%%d=%d",a,b,res);
	return 0;
}
