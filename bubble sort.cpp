#include<stdio.h>
int main()
{
	int a[100],i,n;
	void bubbles(int a[100],int n);
	printf("enter limit:");
	scanf("%d",&n);
	printf("enter n numbers:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	bubbles(a,n);
	
	printf("sorted numbers:");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
void bubbles(int a[100],int n)
{
	int i,pass,t;
	for(pass=1;pass<n;pass++)
	{
		for(i=0;i<n-pass-1;i++)
		{
			if(a[i]>a[i+1])
			{
				t=a[i];
				a[i]=a[i+1];
				a[i+1]=t;
			}
		}
	}
}
