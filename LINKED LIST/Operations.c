// Menu driven program for creation,display,insertion and deletion

#include<stdio.h>
#include<stdlib.h>
void create();
void display();
void insertbeg();
void insertlast();
void insertanypos();
void deletebeg();
void anyposdelete();
void deleteend();
struct node* head=NULL;
struct node
{
    int data;
    struct node *next;
};
int main()
{
    int ch;
    while(1)
    {
        printf("\n");
        printf("enter 0 to create\n");
        printf("enter 1 to display\n");
        printf("enter 2 to insertbeg\n ");
        printf("enter 3 to insertlast\n");
        printf("enter 4 to insertanypos\n");
        printf("enter 5 to  deletebeg\n");
        printf("enter 6 to anyposdelete\n");
        printf("enter 7 to deleteend\n");
        printf("enter 8 to end\n");
        printf("enter your choice");
        scanf("%d",&ch);
        switch(ch)
        {
            case 0:
            {
            create();
            break;
            }
            case 1:
            {
            display();
            break;
            }
            case 2:
            {
            insertbeg();
            break;
            }
            case 3:
            {
            insertlast();
            break;
            }
            case 4:
            {
            insertanypos();
            break;
            }
            case 5:
            {
            deletebeg();
            break;
            }
            case 6:
            {
            anyposdelete();
            break;
            }
            case 7:
            {
            deleteend();
            break;
            }
            case 8:
            {
            printf("thank u for using");
            exit(0);
            break;
            }
        }
    }
    
}
void create()
{
    struct node *temp,*ptr;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("enter the data:");
    scanf("%d",&temp->data);
    if(head==NULL)
    {
        head=temp;
    }
    else
    {
        struct node *ptr=head;
       while(ptr->next!=NULL)
       {
           ptr=ptr->next;
       }
       ptr->next=temp;
        
    }
}
void display()
{
    if(head==NULL)
    {
        printf("empty list");
    }
    else
    {
        struct node* ptr=head;
        printf("the list is:");
        while(ptr->next!=NULL)
        {
         printf("%d->",ptr->data);
         ptr=ptr->next;
        }
        printf("%d\n",ptr->data);
    }
}
void insertbeg()
{
    struct node *new;
    new=(struct node*)malloc(sizeof(struct node));
    printf("enter data:");
    scanf("%d",&new->data);
    if(head==NULL)
    {
        head=new;
    }
    else
    {
        new->next=head;
        head=new;
    }
}
void insertlast()
{
    struct node *new,*temp;
    new=(struct node*)malloc(sizeof(struct node));
    printf("enter data:");
    scanf("%d",&new->data);
    if(head==NULL)
    {
        head=new;
    }
    else
    {
       temp=head;
       while(temp->next!=NULL)
       {
          temp=temp->next; 
       }
       temp->next=new;
       new->next=NULL;
    }
}
void  insertanypos()
{
    struct node *new,*temp,*ptr,*prev_ptr;
    new=(struct node*)malloc(sizeof(struct node));
    printf("enter data:");
    scanf("%d",&new->data);
    int pos,i;
    printf("enter pos:");
    scanf("%d",&pos);
    ptr=head;
    for(i=0;i<pos;i++)
    {
        prev_ptr=ptr;
        ptr=ptr->next;
    }
    new->next=ptr;
    prev_ptr->next=new;
}
void deletebeg()
{
    struct node *temp;
    if(head==NULL)
    {
        printf("list empty");
    }
    else
    {
        temp=head;
        head=head->next;
        free(temp);
        printf("node deleted");
    }
}
void anyposdelete()
{
    int pos,i;
    struct node *temp,*ptr,*prev_ptr;
    printf("enter the position:");
    scanf("%d",&pos);
    if(head==NULL)
    {
        printf("list is empty");
    }
    else if(pos==0)
    {
        temp=head;
        head=head->next;
        free(temp);
    }
    else
    {
        for(i=0;i<pos;i++)
       {
          prev_ptr=ptr;
          ptr=ptr->next;
       }
       prev_ptr->next=ptr->next;
       free(ptr);
    }
}
void deleteend()
{
    struct node *temp,*ptr;
    if(head==NULL)
    {
        printf("list is empty");
    }
    else if(head->next==NULL)
    {
        ptr=head;
        head=ptr->next;
        free(ptr);
    }
    else 
    {
      while(temp->next->next!=NULL)
      {
          temp=temp->next;
      }
      ptr=temp;
       temp->next=NULL;
       printf("node deleted");
    }
}
