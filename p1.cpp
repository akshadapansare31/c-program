#include<stdio.h>
int sum(int n)
{
	if(n==0)
	  return 1;
	else
	   return(n*sum(n-1));
}
int main()
{
	int n,a;
	printf("enter n no");
	scanf("%d",&n);
	a=sum(n);
	printf("factorial of nos=%d",a);
}
