#include<stdio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node*link;
};
struct node*head=NULL;
struct node*head2=NULL;
void insert_at_end(void);
void display(void);
void concatinate(void);
void main()
{
  int ch;
  while(1)
  {
  printf("-------------------------");
  printf("linked list operations\n");
  printf("1.append\n");
  printf("2.display\n");
  printf("3.exit\n");
  Printf("----‐--------------------");
  printf("enter your choice");
  scanf("%d",&ch);
  switch(ch)
  {
    case 1:insert_at_end();
    break;
    case 2:display();
    break;
    case 3:exit(0);
    break;
    default : printf("invlid choice");
  }
  }
}
void insert_at_end()
{
  struct node*temp1,*temp2;
  temp1=(struct node*)malloc(sizeof(struct node));
  temp2=(struct node*)malloc(sizeof(struct node));
  printf("enter the data to be appended to link list 1");
  scanf("%d",&temp1->data);
  temp1->link=NULL;
   printf("enter the data to be appended to link list 2");
  scanf("%d",&temp2->data);
  temp2->link=NULL;
  if(head==NULL&&head2==NULL)
  {
    head=temp1;
    head2=temp2;
  }
  else
  {
    struct node*p;
    p=head;
    while(p->link!=NULL)
    {
      p=p->link;
    }
    p->link=temp1;
    struct node*q;
    q=head2;
    while(q->link!=NULL)
    {
      q=q->link;
    }
    q->link=temp2;

  }
}
void display()
{
  struct node*temp1,*p;
  temp1=head;
  p=head2;
  if(temp1==NULL && p==NULL)
  {
    printf(" linked list id empty ");
  }
  else
  {
    while(temp1!=NULL)
    {
      printf("%d->",temp1->data);
      temp1=temp1->link;

    }
     printf("\n\n");
    while(p!=NULL)
    {
      printf("%d->",p->data);
      p=p->link;

    }
     printf("\n\n");
  }
}
