// Stack

#include<stdio.h>
#include<stdlib.h>
#define MAX 10
struct stack
{
  int item[MAX];
  int top;
};
typedef struct stack st;
void create(st *s)
{
    s->top=-1;
}
int isfull(st *s)
{
    return s->top==MAX-1; 
}
int isempty(st *s)
{
    return s->top==-1;
}
void push(st *s,int data)
{
    if(isfull(s))
    {
        printf("Stack is full");
    }
    else
    {
       s->item[s->top]=data;
       s->top++;
    }
}
void pop(st *s)
{
    if(isempty(s))
    {
        printf("stack is empty");
    }
    else
    {
        printf("\nitem popped:%d",s->item[s->top]);
        s->top--;
    }
}
void printstack(st *s)
{
    if(isempty(s))
    {
        printf("Stack is empty");
    }
    else
    {
        printf("\nStack is:");
        for(int i=0;i<=s->top;i++)
        {
            printf(" %d ",s->item[i]);
        }
    }
}
int main()
{
    st *s=(st *)malloc(sizeof(st));
    create(s);
    push(s,9);
    push(s,8);
    push(s,4);
    push(s,80);
    push(s,7);
    push(s,15);
    push(s,0);
    push(s,8);
    printstack(s);
    pop(s);
    printstack(s);
}
