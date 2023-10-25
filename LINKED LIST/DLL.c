//Menu Driven programs of DLL for creation,deletion,insertion & display
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
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head=NULL;
void create()
{
    struct node *temp,*ptr;
    temp=(struct node*)malloc(sizeof(struct node)); 
    printf("enter the data:");
    scanf("%d",&temp->data);
    temp->next=NULL;
    if(head==NULL)
    {
      head=temp;
    }
    else
    {
        ptr=head;
        while(ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
    ptr->next=temp;
    temp->prev=ptr;
    }
}
void display()
{
    struct node *temp;
    if(head==NULL)
    {
        printf("list is empty");
    }
    temp=head;
    while(temp->next!=NULL)
    {
        printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("%d\n",temp->data);
}
void insertbeg()
{
    struct node *new,*temp;
    new=(struct node*)malloc(sizeof(struct node));
    printf("enter the data:");
    scanf("%d",&new->data);
    if(head==NULL)
    {
        head=new;
    }
    else
    {
       new->next=head;
       head->prev=new;
       head=new;
    }
}
void insertlast()
{
    struct node *temp,*new;
    new=(struct node*)malloc(sizeof(struct node));
    printf("enter the data:");
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
void insertanypos()
{
    struct node *temp,*new,*ptr,*prev_ptr;
    int pos,i;
    printf("enter the position:");
    scanf("%d",&pos);
    new=(struct node*)malloc(sizeof(struct node));
    printf("enter the data:");
    scanf("%d",&new->data);
    if(head==NULL)
    {
        head=new;
    }
    else
    {
        ptr=head;
    for(i=0;i<pos;i++)
    {
        prev_ptr=ptr;
        ptr=ptr->next;
    }
    prev_ptr->next=new;
    new->next=ptr;
    ptr->prev=new;
    new->prev=prev_ptr;
    }
}
void deletebeg()
{
    struct node *ptr;
    if(head==NULL)
    {
        printf("empty");
    }
    else
    {
        ptr=head;
        head=head->next;
        head->prev=NULL;
        free(ptr);
    }
}
void anyposdelete()
{
    struct node *ptr,*prev_ptr;
    int pos,i;
    printf("enter position:");
    scanf("%d",&pos);
    if(head==NULL)
    {
        printf("empty");
    }
    else
    {
        ptr=head;
        for(i=0;i<pos;i++)
        {
           prev_ptr=ptr;
           ptr=ptr->next;
        }
        prev_ptr->next=ptr->next;
        ptr->next->prev=prev_ptr;
        free(ptr);
        
    }
}
void deleteend()
{
    struct node *ptr,*temp;
    if(head==NULL)
    {
        printf("empty");
    }
    else
    {
        ptr=head;
        while(ptr->next->next!=NULL)
        {
            ptr=ptr->next;
        }
        temp=ptr;
        ptr->next=NULL;
    }
}
#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
    struct node *prev;
};
//reverse 
struct node *head = NULL; 
void reversed()
{
    struct node *ptr; 
    ptr=head;
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    while(ptr->prev!=NULL)
    {
        printf("%d->",ptr->data);
       ptr= ptr->prev;
    }
 printf("%d\n",ptr->data);
}
void display()
{
    struct node *ptr=head;
    while(ptr->next!=NULL)
    {
        printf("%d->",ptr->data);
        ptr=ptr->next;
    }
    printf("%d\n",ptr->data);
}
int main()
{
    struct node *f,*s,*t;
    f=(struct node*)malloc(sizeof(struct node));
    s=(struct node*)malloc(sizeof(struct node));
    t=(struct node*)malloc(sizeof(struct node));
    head=f;
    f->data=9;
    s->data=8;
    t->data=7;
    f->next=s;
    s->next=t;
    t->next=NULL;
    f->prev=NULL;
    s->prev=f;
    t->prev=s;
    printf("List is:");
    display();
    printf("reversed list is:");
    reversed(); 
}



    
