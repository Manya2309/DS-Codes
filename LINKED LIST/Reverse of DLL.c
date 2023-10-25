#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
    struct node *prev;
};

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
        ptr=ptr->prev;
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
    printf("List is:");
    display();
    printf("reversed list is:");
    reversed(); 
}
