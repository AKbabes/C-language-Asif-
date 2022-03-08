#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
    struct node *prev;
} *head;

void createlist(int n);
void insertNodeAtNth(int data, int position);
void displaylist();
void del();

int main(){
    int n, d;
    printf("Enter the total number of nodes: ");
    scanf("%d", &n);
    createlist(n);
    printf("\nEnter the value you wish to insert: ");
    scanf("%d", &d);
    printf("\nEnter the position you wish to insert it at: ");
    scanf("%d", &n);
    printf("\nBefore inserting\n");
    displaylist();
    insertNodeAtNth(d, n);
    printf("\nAfter inserting\n");
    displaylist();
    int m;
    printf("\nEnter the position you want to delete data: ");
    scanf("%d",&m);
    del(m);
    printf("\nAfter deleting:\n");
    displaylist();
    return 0;
}

void createlist(int n){
    int i;
    struct node *newNode, *temp;

    head =(struct node*)malloc(sizeof(struct node));
    printf("\nEnter Data of node 1: ");
    scanf("%d", &head->data);
    head->next = NULL;
    head->prev = NULL;

    temp = head;
    for(i = 1; i < n; i++){
        newNode = (struct node*)malloc(sizeof(struct node));
        printf("\nEnter data of node %d: ", i+1);
        scanf("%d", &newNode->data);
        newNode->next = NULL;
        newNode->prev = temp;

        temp->next = newNode;
        temp = temp->next;
    }
}

void insertNodeAtNth(int data, int position){
    int i;
    struct node *newNode, *temp;

    newNode = (struct node*)malloc(sizeof(struct node));
    if(newNode == NULL){
        printf("memory could not be allocated\n");
    }
    else{
        newNode->data = data;
        newNode->next = NULL;
        newNode->prev = NULL;

        temp = head;
        if(position == 1){
            newNode->next = head;
            temp->prev = newNode;
            head = newNode;
            return;
        }

        for(i = 2; i < position; i++){
            temp = temp->next;
            if(temp == NULL){
                break;
            }
        }
        if(temp->next == NULL){
            newNode->next = temp->next;
            newNode->prev = temp;
            temp->next = newNode;
        }
        else if(temp != NULL){
            newNode->next = temp->next;
            newNode->prev = temp;
            temp->next->prev = newNode;
            temp->next = newNode;
        }
        else{
            printf("\n");
        }
    }
}
void del(int pos){
    struct node *temp,*del;
    temp = head;
    if(pos == 1){
        head = temp->next;
        temp->next->prev = NULL;
        free(temp);
        return;
    }
    for (int i = 1; i < pos && temp != NULL; i++){
        temp = temp->next;
    }
    if (temp == NULL){
        return;
    }
    else if(temp->next == NULL){
        temp->prev->next = NULL;
        free(temp);
    }
    else{
        temp->prev->next = temp->next;
        temp->next->prev = temp->prev;
        free(temp);
    }
}

void displaylist(){
    struct node *temp;
    temp = head;
    while(temp != NULL){
        printf("%d", temp->data);
        if(temp->next != NULL){
            printf(" -> ");
        }
        else{
            printf("\n");
        }
        temp = temp->next;
    }
}

