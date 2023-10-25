//Union & Intersection
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
     struct node *prev;
};

void insert(struct node **head, int data) {
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = NULL;
    if (*head == NULL) {
        *head = newNode;
    }
    else
    {
        struct node *ptr = *head;
        while (ptr->next != NULL) {
            ptr = ptr->next;
        }
        ptr->next = newNode;
    }
}

int check(struct node *head, int data) 
{
    struct node *ptr = head;
    while (ptr != NULL) 
    {
        if (ptr->data == data) 
        {
            return 0;
        }
        ptr = ptr->next;
    }
    return 1;
}

struct node *listUnion(struct node *l1, struct node *l2) {
    struct node *result = NULL;
    struct node *ptr1 = l1;
    struct node *ptr2 = l2;
    while (ptr1 != NULL) {
        if (check(result, ptr1->data)) 
        {
            insert(&result, ptr1->data);
        }
        ptr1 = ptr1->next;
    }
    while (ptr2 != NULL)
    {
        if (check(result, ptr2->data)) 
        {
            insert(&result, ptr2->data);
        }
        ptr2 = ptr2->next;
    }
    return result;
}
struct node *listinter(struct node *l1,struct node *l2)
{
  struct node *ptr1=l1;
  struct node *ptr2=l2;
  struct node *result=NULL;  
  while(ptr1!=NULL)
  {
      if(!check(l2,ptr1->data))
      {
         if(check(result,ptr1->data))
         {
            insert(&result,ptr1->data);
         }
      }
    ptr1=ptr1->next;
  }
return result;
}

void display(struct node *head) 
{
    struct node *ptr = head;
    while (ptr->next != NULL) 
    {
        printf("%d -> ", ptr->data);
        ptr = ptr->next;
    }
    printf("%d\n", ptr->data);
}

int main() {
    struct node *l1 = NULL;
    struct node *l2 = NULL;
    insert(&l1, 5);
    insert(&l1, 1);
    insert(&l1, 4);
    insert(&l1, 8);
    insert(&l2, 7);
    insert(&l2, 8);
    insert(&l2, 2);
    insert(&l2, 1);
    printf("List 1 is: ");
    display(l1);
    printf("\nList 2 is: ");
    display(l2);
    struct node *result = listUnion(l1, l2);
    printf("Union of l1 and l2: ");
    display(result);
    return 0;
}
