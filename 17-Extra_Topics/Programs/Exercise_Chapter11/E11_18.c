/*E11_18*/
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int info;
	struct node *link;
};
struct node *create_list(struct node *start);
void display(struct node *start);
struct node *addatbeg(struct node *start,int data);
struct node *addatend(struct node *start,int data);
struct node *Copy(struct node *start1);

int main(void)
{
	struct node *start1=NULL,*start2;	
	
	printf("Enter list 1 -\n");
	start1=create_list(start1);
	
	printf("List 1 is :\n");
	display(start1);
	
	start2 = Copy(start1);
	printf("Copy of list 1 is :\n");
	display(start2);
	return 0;
}/*End of main()*/

struct node *Copy(struct node *start)
{
	struct node *startCopy=NULL;
	struct node *p1,*p2,*tmp;
	
	if(start==NULL)
		return NULL;
   	
	p1=start;
	tmp=(struct node *)malloc(sizeof(struct node));
	tmp->info=p1->info;
	p2=startCopy=tmp;
	p1=p1->link;

	while(p1!=NULL)
	{
		tmp=(struct node *)malloc(sizeof(struct node));
		tmp->info = p1->info;
		p2->link=tmp;
		p2=tmp;
		p1=p1->link;
	}
	p2->link=NULL;
	return startCopy;
}/*End of Copy()*/

struct node *create_list(struct node *start)
{
	int i,n,data;
	printf("Enter the number of nodes : ");
	scanf("%d",&n);
	start=NULL;
	if(n==0)
		return start;

	printf("Enter the element to be inserted : ");
	scanf("%d",&data);
	start=addatbeg(start,data);

	for(i=2;i<=n;i++)
	{
		printf("Enter the element to be inserted : ");
		scanf("%d",&data);
		start=addatend(start,data);	
	}
	return start;
}/*End of create_list()*/

void display(struct node *start)
{
	struct node *p;
	if(start==NULL)
	{
		printf("Empty\n");
		return;
	}
	p=start;

	while(p!=NULL)
	{
		printf("%d ",p->info);
		p=p->link;
	}
	printf("\n\n");
}/*End of display() */

struct node *addatbeg(struct node *start,int data)
{
	struct node *tmp;
	tmp=(struct node *)malloc(sizeof(struct node));
	tmp->info=data;
	tmp->link=start;
	start=tmp;
	return start;
}/*End of addatbeg()*/

struct node *addatend(struct node *start,int data)
{
	struct node *p,*tmp;
	tmp=(struct node *)malloc(sizeof(struct node));
	tmp->info=data;
	p=start;
	while(p->link!=NULL)
		p=p->link;
	p->link=tmp;
	tmp->link=NULL;
	return start;
}/*End of addatend()*/