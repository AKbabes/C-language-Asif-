#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void create_node();
struct node{
    int data;
    struct node* link;
};

struct node* ptr=(struct node*)malloc(sizeof(struct node));
struct node* temp;

void display(struct node * ptr){

    while (ptr!= NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }

}

struct node *add_first(struct node *nd2first){
    struct node *first;
    first =(struct node*)malloc(sizeof(struct node));
    int first_data;
    printf("\nData for the first node: ");
    scanf("%d",&first_data);
    first->data=first_data;
    first->link=NULL;

    first->link=nd2first;
    return first;
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
        printf("\nData for node %d = ",i+1);
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
    ptr=add_first(ptr);
    display(ptr);

}
