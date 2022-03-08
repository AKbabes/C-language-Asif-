#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void create_node();
struct node{
    int data;
    struct node* link;
};

struct node *ptr = (struct node*)malloc(sizeof(struct node));
struct node *temp;

void display(struct node * ptr){

    while (ptr!= NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }

}
struct node *add_first(struct node *nd2first,int val){
    struct node *first;
    first =(struct node*)malloc(sizeof(struct node));
    int first_data;
    first_data=val;
    first->data=first_data;
    first->link=NULL;

    first->link=nd2first;

    return first;
}

void nth_node(struct node *ptr){
    int i,posi,val;
    struct node * temp = ptr;
    struct node * nextnode;
    printf("\nThe position : ");
    scanf("%d",&posi);
    printf("\nThe value : ");
    scanf("%d",&val);
    struct node*nthnode = (struct node*)malloc(sizeof(struct node));
    nthnode->data = val;
    nthnode->link = NULL;
    if(posi==1){
        ptr = add_first(temp,val);
        display(ptr);
    }
    else{
        for(i=2;i<=posi-1;i++){
            temp=temp->link;

        };
        nthnode->link=temp->link;
        temp->link=nthnode;
        display(ptr);
    }
}
int main(){
    create_node();
    return 0;
}

void  create_node(){
    int n,i,data;
    printf("\nNumbers of nodes you want: ");
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
    nth_node(ptr);
}
