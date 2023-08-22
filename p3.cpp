#include<stdio.h>
int sum(int n)
{
	if(n==0)
	  return 0;
	else
	  return(n%10*n/10*n%10)+sum(n/10);
	   
}
int main()
{
	int n,a;
	printf("enter n no");
	scanf("%d",&n);
	a=sum(n);
	if(a==n)
	printf(" nos is armstrong");
	else
	printf("no is not armstrong");
}
