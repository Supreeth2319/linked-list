#include<stdio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node*llink;
  struct node*rlink;
};
struct node*head=NULL;
int len;
void insert_at_specific_position(void);
int length(void);
void display(void);
void insert_at_beggining(void);
int main()
{
  int ch;
  while(1)
  {
  printf("-----------------------------");
  printf("linked list operations\n");
  printf("1 insert_at_beggining\n");
  printf("2.insert at specific point\n");
  printf("3.length of the  doubly link list\n");
  printf("4.display doubly linked list\n");
  Printf("---‐----------------------------");
  printf("enter your choice");
  scanf("%d",&ch);
  switch(ch)
  {
    case 1:insert_at_beggining();
    break;
    case 2:insert_at_specific_position();
    break;
    case 3:len=length();
    printf("length of the list is %d",len);
    break;
    case 4:display();
    break;
    case 5:exit(0);
    default : printf("invlid choice");

  }
  }
  return 0;
}
int length()
{
  int count=0;
  struct node*temp;
  temp=head;
  while(temp!=NULL)
  {
    count=count+1;
    temp=temp->rlink;
  }
  return count;
}
void insert_at_beggining()
{
  struct node*temp;
  temp=(struct node*)malloc(sizeof(struct node));
  printf("enter the node");
  scanf("%d",&temp->data);
  temp->rlink=NULL;
  temp->llink=NULL;
  if(head==NULL)
  {
    head=temp;
  }
  else
  {
    temp->rlink=head;
    head->llink=temp;
    head=temp;
  }
}
void insert_at_specific_position()
{
  int i=1,loc;
  struct node*temp,*p;
  temp=(struct node*)malloc(sizeof(struct node));
    printf("enter the location where you want to insert");
    scanf("%d",&loc);
    len=length();
    if(loc>len)
    {
      printf("invalid location");
      printf("list has only %d elements",len);
    }
  else
    {
     temp=(struct node*)malloc(sizeof(struct node));
     printf("enter the node data");
     scanf("%d",&temp->data);
     temp->llink=NULL;
     temp->rlink=NULL;
     p=head;
     while(i<loc)
     {
      p=p->rlink;
      i++;
     }
     temp->rlink=p->rlink;
     p->rlink->llink=temp;
     temp->llink=p;
     p->rlink=temp;
    }
  }
void display()
{
  struct node*temp;
  temp=head;
    while(temp!=NULL)
    {
      printf("%d->",temp->data);
      temp=temp->rlink;
    }
     printf("\n\n");
}
