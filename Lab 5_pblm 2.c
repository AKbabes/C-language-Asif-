#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *link;
};

struct node *head = (struct node*)malloc(sizeof(struct node));
struct node *temp;


void display(struct node * ptr){
    //checks if its empty or not.
    while (ptr!= NULL)
    {   //it not empty enters the loop.
        printf("%d ", ptr->data);
        //after printing it moves to the next node.
        ptr = ptr->link;
    }

}
struct node *add_first(struct node *nd2first){
    printf("EXECUTING THE ADD FIRST :");
    struct node *first;
    first =(struct node*)malloc(sizeof(struct node));
    int first_data;
    printf("VALUE FOR THE NODE :");
    scanf("%d",&first_data);
    first->data=first_data;
    first->link=NULL;
    first->link=nd2first;
    display(first);
}

int node_count(struct node *head){
    int total_nodes = 0;
    struct node *temp2;
    temp2=head;
    while(temp2!= NULL){
        temp2 = temp2->link;
        total_nodes++;
    }
    return total_nodes;
}
void add_last(struct node *last){
    printf("EXECUTING THE ADD LAST :");
    struct node *copy ;
    copy = last;
    int last_data;
    printf("VALUE FOR THE NODE :");
    scanf("%d", &last_data);
    //creating a node for last node.
    struct node * last_node =(struct node*)malloc(sizeof(struct node));
    last_node->data = last_data;
    last_node->link = NULL;
    //connecting the new node as a last node.
    last->link = last_node;
    display(copy);
}
void nth_node(struct node *ptr,int posi){
    //debug printf("EXECUTING THE NTH POSITION :\n");
    int i,val;
    struct node * temp5 = ptr;
    struct node * nextnode;
    printf("VALUE FOR THE NODE :");
    scanf("%d",&val);
    struct node*nthnode = (struct node*)malloc(sizeof(struct node));
    nthnode->data = val;
    nthnode->link = NULL;
    if(posi==1){
        ptr = add_first(temp);
        display(ptr);
    }
    for(i=2;i<=posi-1;i++){
        temp5=temp5->link;

    }
    nthnode->link=temp5->link;
    temp5->link=nthnode;
    display(ptr);
}

void find_node(struct node * head){
    struct node *newhead;
    newhead=head;
    int dvalue = 0,nodeNUMBER;
	printf("Enter the data you want to find in node : ");
	scanf("%d",&dvalue);
	int loopvai;
    nodeNUMBER=node_count(head);
    //debugprintf("Node COUNT:%d\n",nodeNUMBER);
	for(loopvai=1;loopvai<=nodeNUMBER;loopvai++){
        if(dvalue==head->data ){
            if(loopvai==1){
                nth_node(newhead,loopvai+1);
            }
            else if(loopvai==nodeNUMBER){
                nth_node(newhead,loopvai+1);
            }
            else if(loopvai>1 && loopvai<nodeNUMBER){
                nth_node(newhead,loopvai+1);
            }

        }
        head= head->link;
    }
}

void create_node(){
	int n,data;
	printf("Enter the number of node you want to create : ");
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
	//we saved head for printing.
	find_node(head);
}
int main(){
	create_node();
	return 0;
}
