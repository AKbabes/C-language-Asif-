#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *link;
};

struct node *head = (struct node*)malloc(sizeof(struct node));
struct node *temp;

void display(struct node * head){
    int show = 0;
	printf("\nEnter the node number of data you want to see : ");
	scanf("%d",&show);
	for(int see = 1; see <=show; see++){
		if(see == show){
			printf("data is %d",head->data);
		}
		else{
			head=head->link;
		}
	}
}
void create_node(){
	int n,data;
	printf("Enter the total number of node you want to create : ");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("\nDATA FOR NODE %d = ",i+1);
		scanf("%d",&data);
		if(i==0){
			//it's a global pointer.
			head->data= data;
			head->link=NULL;
			//using temp to avoid using head.
			//because we need head for using on other stuff.
			temp = head;
		}
		else{
			struct node *next = (struct node*)malloc(sizeof(struct node));
			next->data = data;
			next->link = NULL;//USEING NULL TO AVOID CONFUSSION.
			//linking part.
			//connected the new node to the next node;
			temp->link = next;
			temp = next;
		}
	}
	display(head);
}
int main(){
	create_node();
	return 0;
}
