#include<stdio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node*link;
};
struct node*head=NULL;
int len;
void append(void);
int length(void);
void display(void);
void main()
{
  int ch;
  while(1)
 {
  printf("linked list operations\n");
  printf("1.append\n");
  printf("2.length of the linked list");
  Printf("3.display the linked list");
  printf("enter your choice");
  scanf("%d",&ch);
  switch(ch)
  {
    case 1:append();
    break;
    case 2:len=length();
    printf("length of the list is %d",len);
    break;
    case 3:display();
    break;
    case 4:exit(0);
    default : printf("invlid choice");

  }
  }

}
void append()
{
  struct node*temp;
  temp=(struct node*)malloc(sizeof(struct node));
  printf("enter the data to be appended");
  scanf("%d",&temp->data);
  temp->link=NULL;
  if(head==NULL)
  {
    head=temp;;
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
    printf("linked list id empty ");
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
