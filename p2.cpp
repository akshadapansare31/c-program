#include<stdio.h>
int factorial(int n)
{
	if(n==0)
	  return 1;
	else
	   return(n*factorial(n-1));
}
int main()
{
	int n,a;
	printf("enter n no");
	scanf("%d",&n);
	a=factorial(n);
	printf("factorial of nos=%d",a);
}
