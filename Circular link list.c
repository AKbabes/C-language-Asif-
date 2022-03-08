#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node * next;
}*head;

void createlist(int n);
void displaylist();

int main(){
    int n, data, choice=1;

    head = NULL;

    while(choice != 0){
        printf("CIRCULAR LINKED LIST PROGRAM\n");
        printf("1. Create List\n");
        printf("2. Display list\n");
        printf("3. Exit\n");
        printf("\nEnter your choice : ");

        scanf("%d", &choice);

        switch(choice){
        case 1:
            printf("Enter the total number of nodes: ");
            scanf("%d", &n);
            createlist(n);
            break;
        case 2:
            displaylist();
            break;
        case 3:
            break;
        default:
            printf("Error! Invalid choice. Please choose between 1,2,3");
        }

        printf("\n\n");
    }

    return 0;
}

void createlist(int n){
    int i, data;
    struct node *prevNode, *newNode;

    if(n >= 1){
        head = (struct node *)malloc(sizeof(struct node));

        printf("\nEnter data of 1 node: ");
        scanf("%d", &data);

        head->data = data;
        head->next = NULL;

        prevNode = head;

        for(i=2; i<=n; i++){
            newNode = (struct node *)malloc(sizeof(struct node));

            printf("\nEnter data of %d node: ", i);
            scanf("%d", &data);

            newNode->data = data;
            newNode->next = NULL;

            prevNode->next = newNode;

            prevNode = newNode;
        }
        prevNode->next = head;

        printf("\nCIRCULAR LINKED LIST CREATED SUCCESSFULLY\n");
    }
}
void displaylist(){
    struct node *current;
    int n = 1;

    if(head == NULL){
        printf("List is empty.\n");
    }
    else{
        current = head;
        printf("DATA IN THE LIST:\n\n");

        do{
            printf("%d -> ",current->data);

            current = current->next;
            n++;
        }
        while(current != head);
    }
}
