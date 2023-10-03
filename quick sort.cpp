#include<stdio.h>
void accept(int a[],int n)
{
	int i;
	printf("enter n numbers:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
}

void display(int a[],int n)
{
	int i;
	printf("elements in an array:");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}

int quicksort(int a[],int s,int e)
{
	int pivot,prev,next,temp;
	pivot=a[s];
	next=s+1;
	prev=e;

	do
	{
		while((a[next]<pivot)&&(next<=e))
		{
			next++;
		}
		while((a[prev]>pivot)&&(prev>s))
		{
			prev--;
		}
		if(next<prev)
		{
			temp=a[prev];
			a[prev]=a[next];
			a[next]=temp;
		}
	}while(next<prev);
		a[s]=a[prev];
		a[prev]=pivot;
		return prev;
}

void divide(int a[],int s,int e)
{
	int pos;
	if(s<e)
	{
		pos=quicksort(a,s,e);
		divide(a,s,pos-1);
		divide(a,pos+1,e);
	}
}
int main()
{
	int a[100],n,i;
	printf("\n enter limit:");
	scanf("%d",&n);
	accept(a,n);
	divide(a,0,n-1);
	display(a,n);

}
