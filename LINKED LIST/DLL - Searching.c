//searching
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
        void search(){
	struct node* temp;
	int num;
	printf("enter no");
	scanf("%d",&num);
	temp=head;
	while(num!=temp->data && temp->next!=NULL){
		temp=temp->next;
	}
	if(temp->data!=num){
		printf("ele not found");
	}
	else{
		printf("ele found");
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
  f->prev=NULL;
  s->prev=f;
  t->prev=s;
  f->data=22;
  s->data=8;
  t->data=99;
  display();
  sort();
  printf("The sorted list is:");
  display();
}
