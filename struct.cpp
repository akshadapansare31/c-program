#include<stdio.h>
#include<string.h>
struct student
{
	int rno;
	char name[20];
	float per;
}s1[100];
int main()
{
	int i,n,flag=0,num;
	char sname[20];
	printf("enter limit");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	printf("enter rno name per");
	scanf("%d%s%f",&s1[i].rno,&s1[i].name,&s1[i].per);
    }
    printf("\n enter student roll noto search record");
    scanf("%d",&num);
    for(i=0;i<n;i++)
    {
	if(s1[i].rno==num)
	{
		flag=1;
		break;
	}
    }  
	if(flag==1) 
    {
	printf("\n student roll no=%d",s1[i].rno);
	printf("\n student name=%s",s1[i].name);
	printf("\n student per=%f",s1[i].per);	
    }
    else
    {
    printf("record is not found");	
	}
    
}

















