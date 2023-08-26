#include<stdio.h>
#include<stdlib.h>
struct Emp
{ 
  char ename[20];
  int age,sal;	
}e1[100],t;	
void bubble(struct Emp e1[100],int n)
{
	int i,pass;
	for(pass=1;pass<n;pass++)
	{
		for(i=0;i<n-pass;i++)
		{
			if(e1[i].age>e1[i+1].age)
			{
				t=e1[i];
				e1[i]=e1[i+1];
				e1[i+1]=t;
			}
		}
	}
printf("\n Bubble Sort\n");
	for(i=0;i<n;i++)
	{
     printf("\n %s\t%d\t%d",e1[i].ename,e1[i].age,e1[i].sal);
    }  
}
void insertion(struct Emp e1[100],int n)
{
	int i,j,key;
	for(i=1;i<n;i++)
	{
		key=e1[i].age;
		for(j=i-1;j>=0&&key<e1[j].age;j--)
		{
			t=e1[j+1];
			e1[j+1]=e1[j];
			e1[j]=t;
		}
	}
printf("\n Insertion Sort\n");
	for(i=0;i<n;i++)
	{
     printf("\n %s\t%d\t%d",e1[i].ename,e1[i].age,e1[i].sal);
    }  	
}
void selection(struct Emp e1[100],int n)
{
	int i,j,min,index;
	for(i=0;i<n;i++)
	{
		min=e1[i].age;
		index=i;
		for(j=i+1;j<n;j++)
		{
			if(e1[j].age<min)
			{
				min=e1[j].age;
				index=j;
			}
		}
		t=e1[i];
		e1[i]=e1[index];
		e1[index]=t;
	}
printf("\n selection Sort\n");
	for(i=0;i<n;i++)
	{
     printf("\n %s\t%d\t%d",e1[i].ename,e1[i].age,e1[i].sal);
    }  		
}
int main()
{
	FILE *f1;
	int i=0,n;
	f1=fopen("emp.txt","r");
	if(f1==NULL)
	{
		printf("File not found");
		exit(0);
	}
	while(!feof(f1)) 
	{
	fscanf(f1,"%s%d%d",&e1[i].ename,&e1[i].age,&e1[i].sal);
	i++;
	}
	n=i-1;
	bubble(e1,n);
//	insertion(e1,n);
//	selection(e1,n);
		fclose(f1);
}

