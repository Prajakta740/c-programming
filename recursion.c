#include<stdio.h>
void main()
{
	int n, f;
	printf("enter the number:\n");
	scanf("%d",&n);
	f=m1(n);
	printf("factorial=%d",f);
}
int m1(int n)
{
	if(n<=1)
	  return 1;
	else 
	  return n*m1(n-1);  
}
