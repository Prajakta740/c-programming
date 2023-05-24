#include<stdio.h>
int factorial(int);
int main()
{
	int a,fact;
	printf("enter the value:\n");
	scanf("%d",&a);
	fact=factorial(a);
	printf("factorial=%d\n",fact);
	return 0;
}
int factorial (int x)
{
	int i, f=1;
	for(i=x;i>=1;i--)
	  f=f*i;
	return (f);  
}
