#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
    struct node *prev;
} *head;

void create_list(int n);
void search_del(int pos);
void displayList();

int main(){
    int n = 7, pos;
    create_list(n);
    displayList();

    printf("Enter the position to search: ");
    scanf("%d", &pos);
    search_del(pos);

    return 0;
}

void create_list(int n){
    int i;
    struct node *newNode, *temp;

    head = (struct node*)malloc(sizeof(struct node));
    printf("Enter Data of node 1: ");
    scanf("%d", &head->data);
    head->next = NULL;
    head->prev = NULL;

    temp = head;
    for(i = 1; i < n; i++){
        newNode = (struct node*)malloc(sizeof(struct node));
        printf("Enter data of node %d: ", i+1);
        scanf("%d", &newNode->data);
        newNode->next = NULL;
        newNode->prev = temp;

        temp->next = newNode;
        temp = temp->next;
    }
}

void search_del(int pos){
    struct node *temp, *del;
    int i, count = 1;

    temp = head;
    for(i = 1; i < pos; i++){
        temp = temp->next;
        count++;
    }

    if(count == pos){
        printf("the data in node %d : %d\n\n", pos, temp->data);
    }

    //printf("Before deletion\n");
    //displayList();

    if(temp->prev != head && temp->next->next != NULL){

        del = temp->prev;
        temp->prev->prev->next = temp;
        temp->prev = temp->prev->prev;
        free(del);

        del = temp->next;
        temp->next->next->prev = temp;
        temp->next = temp->next->next;
        free(del);
    }
    else if(temp->prev == head){
        del = temp->prev;
        temp->prev = NULL;
        head = temp;
        free(del);

        del = temp->next;
        temp->next->next->prev = temp;
        temp->next = temp->next->next;
        free(del);
    }
    else if(temp->next->next == NULL){
        del = temp->prev;
        temp->prev->prev->next = temp;
        temp->prev = temp->prev->prev;
        free(del);

        del = temp->next;
        temp->next = NULL;
        free(del);

    }

    printf("After deleting the previous and the next node of the searched position:\n");
    displayList();
}

void displayList(){
    struct node *temp;
    temp = head;
    while(temp != NULL){
        printf("%d", temp->data);
        if(temp->next != NULL){
            printf(" -> ");
        }
        else{
            printf("\n\n");
        }
        temp = temp->next;
    }
}
