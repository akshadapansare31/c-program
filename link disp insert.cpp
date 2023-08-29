#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*next;
};
struct node*create(struct node*list)
{
	int i,n;
	struct node*newnode,*temp;
	printf("enter limit");
	scanf("%d",&n);
	for(i=0;i<n;i++)
{
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("enter value");
	scanf("%d",&newnode->data);
	newnode->next=NULL;
	if(list==NULL)
	{
		list=newnode;
		temp=newnode;
	}
	else
	{
		temp->next=newnode;
		temp=newnode;
	}
}
return list;
}
void disp(struct node*list)
{
	struct node*temp;
	for(temp=list;temp!=NULL;temp=temp->next)
{
	printf("%d\t",temp->data);
}
}
struct node*insertbeg(struct node*list,int num)
{
	struct node*newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=num;
	newnode->next=list;
	list=newnode;
	return list;
}
int main()
{
	int ch,num;
	struct node*list=NULL;
do
{
	printf("/n 1-create \n 2-disp \n 3-insert beginning");
	printf("enter choice");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:list=create(list);
		       break;
		case 2:disp(list);
		       break;
		case 3:printf("enter number");
		       scanf("%d",&num);
		       list=insertbeg(list,num);
		       break;
	}
}while(ch<4);
}
