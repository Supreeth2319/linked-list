#include<stdio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node*link;
};
struct node*head=NULL;
int len;
void insert_at_end(void);
int length(void);
void display(void);
void insatbeg(void);
void main()
{
  int ch;
  while(1)
  {
  printf("\nlinked list operations\n");
  printf("1.insert at end\n");
  printf("2.length\n");
  printf("3.display\n");
  printf("\n5.add at beginning\n");
  printf("4.add at specific position\n");
  printf("enter your choice");
  scanf("%d",&ch);
  switch(ch)
  {
    case 1:insert_at_end();
    break;
    case 2:len=length();
    printf("length of the list is %d",len);
    break;
    case 3:display();
    break;
    case 5:insatbeg();
    break;
    case 6:exit(0);
    default : printf("invlid choice");

  }
  }

}
void insert_at_end()
{
  struct node*temp;
  temp=(struct node*)malloc(sizeof(struct node));
  printf("enter the data to be appended");
  scanf("%d",&temp->data);
  temp->link=NULL;
  if(head==NULL)
  {
    head=temp;
  }
  else
  {
    struct node*p;
    p=head;
    while(p->link!=NULL)
    {
      p=p->link;
    }
    p->link=temp;

  }
}
int length()
{
  int count=0;
  struct node*temp;
  temp=head;
  while(temp!=NULL)
  {
    count=count+1;
    temp=temp->link;
  }
  return count;
}
void display()
{
  struct node*temp;
  temp=head;
  if(temp==NULL)
  {
    printf("linked list is empty there are no elements to display ");
  }
  else
  {
    while(temp!=NULL)
    {
      printf("%d->",temp->data);
      temp=temp->link;

    }
     printf("\n\n");
  }
}
void insatbeg()
{
  struct node*temp;
   temp=(struct node*)malloc(sizeof(struct node));
  printf("enter the data to be appended");
  scanf("%d",&temp->data);
  temp->link=NULL;
  if(head==NULL)
  {
    head=temp;
  }
  else
  {
    temp->link=head;
  head=temp;
  }
  
}
