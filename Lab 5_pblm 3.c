#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* link;
};

struct node * ptr = (struct node*)malloc(sizeof(struct node));
struct node * temp;

void display(struct node * ptr){
    //checks if its empty or not.
    printf("\n");
    while (ptr!= NULL)
    {   //it not empty enters the loop.
        printf("%d ", ptr->data);
        //after printing it moves to the next node.
        ptr = ptr->link;
    }
}

void node_count(struct node *head){
    int total_nodes = 0;
    struct node *temp2;
    temp2=head;
    while(temp2!= NULL){
        temp2 = temp2->link;
        total_nodes++;
    }
    printf("\nTotal node number is %d\n",total_nodes);
}

void nth_node(struct node *ptr,int posi){
    int val;
    struct node * temp = ptr;
    struct node * nextnode;
    printf("\nValue in Mid-position : ");
    scanf("%d",&val);
    struct node*nthnode = (struct node*)malloc(sizeof(struct node));
    nthnode->data = val;
    nthnode->link = NULL;

        for(int i=2;i<=posi-1;i++){
            temp=temp->link;

        };
        nthnode->link=temp->link;
        temp->link=nthnode;
        display(ptr);
}

void  create_node(){
    int n,i,data;
    printf("Total number of nodes : ");
    scanf("%d",&n);
    //run the loop n-th time.
    for ( i=0; i<n;i++){
        printf("\nDATA FOR NODE %d = ",i+1);
        scanf("%d",&data);
        //this if checks if its the first run.
        if(i==0){
            //this creates the first node.
            ptr->data = data;
            ptr->link = NULL;
            //this connecting the ptr to the temp pointer.
            temp = ptr;
        }
        else{
            struct node* next=(struct node*)malloc(sizeof(struct node));
            next->data = data;
            next->link = NULL;
            //this is the link process.
            //this code connect new node to the previous node.
            temp->link=next;
            temp=next;
        }
    }
    if(n%2==0){
        n=n/2;
        n=n+1;
    }
    else{
        n=n-1;
        n=n/2;
        n=n+2;
    }
    nth_node(ptr,n);
    node_count(ptr);
}

int main(){
    create_node();
    return 0;
}
