#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node * prev;
    struct node * next;
}*stnode,*ennode;

void createlist(int n);
void displaylist();

int main(){
    int n;
    stnode = NULL;
    ennode = NULL;
    printf("Input the total number of nodes : ");
    scanf("%d",&n);

    createlist(n);
    displaylist();
    return 0;
}

void createlist(int n){
    int i,data;
    struct node *fnNode;

    if(n >= 1){
        stnode =(struct node *)malloc(sizeof(struct node));

        if(stnode != NULL){
            printf("\nInput value for node 1 : ");
            scanf("%d", &data);

            stnode->data = data;
            stnode->prev = NULL;
            stnode->next = NULL;
            ennode = stnode;
            for(i=2; i<=n; i++){
                fnNode =(struct node *)malloc(sizeof(struct node));
                if(fnNode != NULL){
                    printf("\nInput value for node %d : ", i);
                    scanf("%d", &data);
                    fnNode->data = data;
                    fnNode->prev = ennode;
                    fnNode->next = NULL;

                    ennode->next = fnNode;
                    ennode = fnNode;
                }
                else{
                    printf("Memory can not be allocated.");
                    break;
                }
            }
        }
        else{
            printf(" Memory can not be allocated.");
        }
    }
}
void displaylist(){
    struct node * tmp;
    int n = 1;
    if(stnode == NULL){
        printf("No data found in the List.");
    }
    else{
        tmp = stnode;
        printf("\n\nData in the list are :\n\n");

        while(tmp != NULL){
            printf("%d -> ",tmp->data);
            n++;
            tmp = tmp->next;
        }
    }
}
