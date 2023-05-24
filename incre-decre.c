#include<stdio.h>
void increment();
void decrement();
int main()
{
	extern int a=1;
	printf("number = %d",a);
	increment();
	increment();
	decrement();
	decrement(); 
	return 0;
}
void increment()
{
	a=a+1;
	printf(" on increment=%d",a);
}
void decrement()
{
	a=a-1;
	printf(" on decrement=%d",a);
}
