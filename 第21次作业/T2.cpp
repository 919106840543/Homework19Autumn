#include <iostream>
 #include <string.h>
 using namespace std;
 struct node{
 unsigned num;
 int Int;
 node*next;};

 node *create(unsigned n){ 
 node *head = NULL,*rear = NULL;
 int x;
 for(unsigned i = 0; i < n; i++){
 	cin>>x;
 node *p = new node{i+1,x,head};
 if(head == NULL){ 
 head = p;
 rear = p;
 }else{
 rear -> next = p;
 rear = p;
 }
 }rear->next=NULL;
 return head;
 }

 void print(node *a,unsigned b)
 {node *head = NULL;
 head=a;
 for(unsigned i=0;i<b;i++)
 {
 	cout<<head->num <<' '<<head->Int <<'\n';
 	if(head->next==NULL)
 	break;
 	head=head->next;
 }return;
 }

 void del(node *a,int x)
 {node *q=NULL,*tem=NULL;
 q=a;
 for(unsigned i=0;i<x-1;i++){
 if(q->next!=NULL)
 tem=q;
 q=q->next;
 }
 node *p=NULL;
 if(q->next!=NULL)p=q->next;
 delete q;
 tem->next=p;
 return;
 }

 void destory(node*a,unsigned n)
 {
 	node *x;
 while(a)
 	{if(a->next!=NULL)
 	x=a;
 	a=a->next;
 	delete x;
 	}
 }
 int main(){
 	unsigned a,b;
 	cin>>a;
 	node *x=new node;
 	x=create(a);
 	print(x,a);
 	cin>>b;
 	del(x,(int)b);
 	print(x,a);
 	destory(x,a);
 	return 0;
 	}
