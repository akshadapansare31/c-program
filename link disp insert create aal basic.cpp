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
struct node*insertend(struct node*list,int num)
{
	struct node*newnode,*temp;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=num;
	newnode->next=NULL;
	for(temp=list;temp->next!=NULL;temp=temp->next)
	temp->next=newnode;
	return list;
}
struct node*insertmid(struct node*list,int pos,int num)
{
	struct node*newnode,*temp;
	int i;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=num;
	for(i=1,temp=list;i<(pos-1)&&temp->next!=NULL;i++,temp=temp->next);
	newnode->next=temp->next;
	temp->next=newnode;
	return list;
}
struct node*delbeg(struct node*list)
{
	struct node*temp;
	temp=list;
	list=list->next;
	return list;
}
struct node*delend(struct node*list)
{
	struct node*temp,*temp1;
	for(temp=list;temp->next->next!=NULL;temp=temp->next)
	temp1=temp->next;
	temp->next=NULL;
	free(temp1);
	return list;
}
struct node*delmid(struct node*list,int pos)
{
	struct node*temp,*temp1;
	int i;
	for(i=1,temp=list;i<(pos-1)&&temp->next!=NULL;i++,temp=temp->next)
	temp1=temp->next;
	temp->next=temp1->next;
	free(temp1);
	return list;
}
int main()
{
	int ch,num,pos;
	struct node*list=NULL;
do
{
	printf("/n 1-create \n 2-disp \n 3-insert beginning \n 4-insertend \n 5-insertmid \n 6-delbeg \n 7-delend \n 8-delmid");
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
	    case 4:printf("enter number");
			   scanf("%d",&num);
			   list=insertend(list,num);
			   break;
		case 5:printf("enter number");
			   scanf("%d",&num);
			   printf("enter pos");
			   scanf("%d",&pos);
			   list=insertmid(list,num,pos);
			   break;
	    case 6:list=delbeg(list);
		       break;
		case 7:list=delend(list);
		       break;
		case 8:printf("enter pos");
		       scanf("%d",&pos);
		       list=delmid(list,pos);
		       break;
	}
}while(ch<8);
}
