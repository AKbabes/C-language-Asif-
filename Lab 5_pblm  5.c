#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node* next;
    struct node* pre;
};
struct node* head= (struct node*)malloc(sizeof(struct node));
struct node* temp;

void display(struct node * ptr){
    printf("\n");
    //checks if its empty or not.
    while (ptr!= NULL)
    {   //it not empty enters the loop.
        printf("%d ", ptr->data);
        //after printing it moves to the next node.
        ptr = ptr->next;
    }
}

void create_dnode(){
    int number=0,data;
    printf("Total number of nodes : ");
    scanf("%d",&number);

        for(int i=0;i<number;i++){
            printf("\nDATA FOR NODE %d = ",i+1);
            scanf("%d", &data);
            if(i==0){
                head->data=data;
                head->next=NULL;
                head->pre=NULL;

                temp=head;
            }
            else{
                struct node* next=(struct node*)malloc(sizeof(struct node));
                next->data=data;
                next->next=NULL;
                next->pre=NULL;

                temp->next=next;
                next->pre=temp;

                temp=next;
            }
        }
    display(head);
}

int main(){
    create_dnode();
    return 0;
}
