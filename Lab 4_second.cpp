#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void create_node();
struct node{
    int data;
    struct node *link;
};
struct node *ptr=(struct node *)malloc(sizeof(struct node));
struct node *temp;


void display(struct node * ptr){

    while (ptr!= NULL)
    {
        printf("%d \n", ptr->data);

        ptr = ptr->link;
    }

}

void viewnode(struct node * ptr){
    int node_position;
    struct node *temp2;
    temp2 = ptr;
    printf("Enter the node position to see the data: ");
    scanf("%d", &node_position);
    int s=0;
    for(s=1;s<node_position;s++){
        temp2=temp2->link;
    }
    printf("Data of node %d is %d",node_position,temp2->data);
}

int main(){
    create_node();
    return 0;
}

void  create_node(){
    int n,i,data;
    printf("Number of nodes you want: ");
    scanf("%d",&n);

    for ( i=0; i<n;i++){
        printf("Data for node %d = ",i+1);
        scanf("%d",&data);

        if(i==0){

            ptr->data = data;
            ptr->link = NULL;

            temp = ptr;
        }
        else{
            struct node* next=(struct node*)malloc(sizeof(struct node));
            next->data = data;
            next->link = NULL;

            temp->link=next;
            temp=next;
        }
    }
    printf("\n");
    viewnode(ptr);
}
