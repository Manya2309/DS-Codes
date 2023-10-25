// Sorting

struct node
{
  struct node *next;
  int data;
};
struct node *head=NULL;
        void sort(){
	struct node *i,*j;
	int temp;
	for(i=head;i->next!=NULL;i=i->next)
   {
   	for(j=i->next;j!=NULL;j=j->next){
   		if(i->data>j->data){
   			temp=i->data;
   			i->data=j->data;
   			j->data=temp;
		   }
	   }
   }
}
void display()
{
 struct node *ptr;
 ptr=head;
 while(ptr->next!=NULL)
{
  printf("%d",&ptr->data);
  ptr=ptr->next;
}
printf("%d",&ptr->data);
}
int main()
{
  struct node *f,*s,*t;
  f=(struct node)malloc(sizeof(struct node));
  s=(struct node)malloc(sizeof(struct node));
  t=(struct node)malloc(sizeof(struct node));
  f->next=s;
  s->next=t;
  t->next=NULL;
  f->data=22;
  s->data=8;
  t->data=99;
  display();
  sort();
  printf("The sorted list is:");
  display();
}
