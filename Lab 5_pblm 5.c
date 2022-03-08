#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node*link;
};
struct node*ptr = (struct node*)malloc(sizeof(struct node));
struct node*temp;

void display(struct node * ptr){
    printf("\n");
    //checks if its empty or not.
    while (ptr!= NULL)
    {   //it not empty enters the loop.
        printf("%d ", ptr->data);
        //after printing it moves to the next node.
        ptr = ptr->link;
    }

}

void delet_last(struct node * ptr){
    struct node *prelast;
    struct node *endnode;
    endnode=ptr->link;prelast = ptr;

    while (endnode->link){
        prelast = prelast->link;
        endnode = endnode->link;
    }
    prelast->link=NULL;
    free(endnode);
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

void delete_nth(struct node*ptr) {
   struct node* cpy;
   struct node* temp3;
   cpy = ptr;
   struct node* pre=ptr;
   struct node* current;
   struct node* next=ptr;
   int position,s ;
   printf("\nEnter the position you want to delete : ");
   scanf("%d",&position);
   if(position==1){
       temp3=cpy->link;
       free(cpy);
       cpy=temp3;
       display(temp3);
    }
    else{
        int countNUM=node_count(ptr);
        if(position==countNUM){
            delet_last(cpy);
            display(ptr);
        }
        else{
            for(int j=1;j<position-1;j++){
            pre=pre->link;
            }
            //debug:printf("PRE DATA %d\n",pre->data);
            current=pre->link;
            //debug:printf("CURRENT DATA %d\n",current->data);
            next=current->link;
            //debug:printf("NEXT DATA %d\n",next->data);
            pre->link=next;
            free(current);
            display(ptr);
        }

    }
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
    delete_nth(ptr);
}

int main(){
    create_node();
    return 0;
}
