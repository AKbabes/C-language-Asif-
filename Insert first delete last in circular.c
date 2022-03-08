#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node * next;
}*head;
void createList(int n);
void displayList();
void del();
void insertatfirst();

int main(){
    int n, data, choice=1;

    head = NULL;

    while(choice != 0){
        printf("CIRCULAR LINKED LIST PROGRAM\n");
        printf("1. Create list\n");
        printf("2. Display list\n");
        printf("3. Delete last node\n");
        printf("4. Insert at first\n");
        printf("0. Exit\n");
        printf("----------------------\n");
        printf("Enter your choice : ");

        scanf("%d", &choice);

        switch(choice){
        case 1:
            printf("Enter the total number of nodes: ");
            scanf("%d", &n);
            createList(n);
            break;
        case 2:
            displayList();
            break;
        case 3:
            del();
            break;
        case 4:
            insertatfirst();
            break;
        case 0:
            break;
        default:
            printf("Error! Invalid choice. Please choose between 0-2");
        }

        printf("\n\n\n");
    }

    return 0;
}

void createList(int n){
    int i, data;
    struct node *prevNode, *newNode;

    if(n >= 1){
        head = (struct node *)malloc(sizeof(struct node));

        printf("Enter data of 1 node: ");
        scanf("%d", &data);

        head->data = data;
        head->next = NULL;

        prevNode = head;

        for(i=2; i<=n; i++){
            newNode = (struct node *)malloc(sizeof(struct node));

            printf("Enter data of %d node: ", i);
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

void displayList(){
    struct node *current;
    int n = 1;

    if(head == NULL){
        printf("List is empty.\n");
    }
    else{
        current = head;
        printf("DATA IN THE LIST:\n");

        while(current->next != head){
            printf("%d", current->data);
            current = current->next;
            if(current != NULL){
                printf(" -> ");
            }
        }
        printf("%d", current->data);
    }
}


void del(){
    struct node *temp,*prev;

    temp=head;
    while(temp->next != head){
        temp=temp->next;
    }
    prev = temp;
    while(prev->next != temp){
        prev = prev->next;
    }

    prev->next = head;
    free(temp);
}

void insertatfirst(){
    int data;
    struct node *newnode, *temp;

    newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter the data for the node :");
    scanf("%d", &data);
    newnode->data=data;
    newnode->next=NULL;

    temp = head;
    while(temp->next != head){
        temp = temp->next;
    }

    newnode->next = head;
    head = newnode;
    temp->next = head;

}
