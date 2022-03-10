#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node
{
char data[40];
struct node*rlink;
struct node*llink;
};
char data[40];
struct node*head=NULL;
void insert()
{
struct node*temp;
temp=(struct node*)malloc(sizeof(struct node));
printf("enter music name to:\n");
scanf("%s",temp->data);
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

struct node* delete_from_front()
{
struct node*temp;
if(head==NULL)
{
  printf("list is empty");
}
else
{
  temp=head;
  head=head->rlink;
  head->llink=NULL;
  free(temp);
}
}
struct node* delete_from_end()
  {
    struct node*temp=head;
    struct node*temp2;
    while(temp->rlink!=NULL)
      {
        temp=temp->rlink;
      }
    temp2=temp->llink;
    temp2->rlink=NULL;
    free(temp);
    return head;
  }
struct node* delinter()
  { 
    int position;
    struct node*temp=head;
    struct node*temp2=NULL;
    if(position==1)
    {
      head=delete_from_front();
      return head;
    }
    while(position>1)
      {
        temp=temp->rlink;
        position--;
      }
    if(temp->rlink==NULL)
    {
      head=delete_from_end();
    }
    else
    {
      temp2=temp->llink;
      temp2->rlink=temp->rlink;
      temp->rlink->llink=temp2;
      free(temp);
      temp=NULL;
    }
    return head;
  }
void display()
{
struct node*temp;
temp=head;
while(temp!=NULL)
  {
    printf("%s\n",temp->data);
    temp=temp->rlink;
  }
  }
void next_file()
{
struct node*temp;
if(temp==NULL){
printf("no songs in palylist\n");
}
else
{
temp=temp->rlink;
printf("playing next song:%s\n",temp->data);
}
}

void prev_file()
{
struct node*temp;
if(temp==NULL)
{
printf("no songs in palylist\n");
}
else
{
temp=temp->llink;
printf("playing previous song:%s\n",temp->data);
}
}

void first_file()
{
struct node*temp;
if(head==NULL)
{
printf("playlist is empty:\n");
}
else
{
printf("playing first music: %s \n",head->data);
}
}

void last_file()
{
struct node*temp;
if(head==NULL){
printf("playlist is empty:\n");
}
else{
printf("playing last music: %s \n",head->data);
}
}
int main()
{
int choice;
while(1){
printf("\n----Menu for playlist----\n");
printf("1.add music\n");
printf("2.delete front music\n");
printf("3.delete end music\n");
printf("4.delete intermediate music\n");
printf("5.display playlist\n");
printf("6.play next file\n");
printf("7.play previous file\n");
printf("8.play first file\n");
printf("9.play last file\n");
printf("10. exit\n");
printf("enter valid choice");
scanf("%d",&choice);
switch(choice)
{
case 1:insert();
	break;
case 2:delete_from_end();
	break;
case 3:delete_from_end();
	break;
case 4:delinter();
	break;
case 5:display();
	break;
case 6:next_file();
	break;
case 7:prev_file();
	break;
case 8:first_file();
  break;
case 9:last_file();
  break;
case 10:exit(0);
default:return 0;
}
}
}
