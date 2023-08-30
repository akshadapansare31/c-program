#include<stdio.h>
int main()
{
	int a[100],i,n;
	printf("enter limit");
	scanf("%d",&n);
	printf("enter n number");
	for(i=0;i<n;i++)
	
	scanf("%d",&a[i]);
	
	printf("enter even nos");
	for(i=0;i<n;i++)
	{
	   if(a[i]%2==0)
	   printf("%d\t",a[i]);
	}	
	
}

