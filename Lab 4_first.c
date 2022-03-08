#include <stdio.h>
#include <stdlib.h>

void getlist();
void viewlist();

struct node{
    float p;
    int q;
    char r;
    char s[50];
    struct node *link;
}*head;

int main(){
    getlist();
    viewlist();
return 0;
}

void getlist(){
    struct node *newNode, *temp;

    head = (struct node*)malloc(sizeof(struct node));
    printf("Enter a decimal number: ");
    scanf("%f", &head->p);
    printf("Enter a integer number: ");
    fflush(stdin);
    scanf("%d", &head->q);
    printf("Enter a character: ");
    fflush(stdin);
    scanf("%c", &head->r);
    printf("Enter a string: ");
    fflush(stdin);
    scanf("%[^\n]s\n", head->s);
    head->link = NULL;

    temp = head;
    printf("\n");
    for(int i=1;i<7;i++){
        newNode = (struct node*)malloc(sizeof(struct node));
        printf("Enter a decimal number: ");
        scanf("%f", &newNode->p);
        printf("Enter a integer number: ");
        fflush(stdin);
        scanf("%d", &newNode->q);
        printf("Enter a character: ");
        fflush(stdin);
        scanf("%c", &newNode->r);
        printf("Enter a string: ");
        fflush(stdin);
        scanf("%[^\n]s", newNode->s);
        newNode->link = NULL;
        newNode->link = NULL;

        temp->link = newNode;
        temp = temp->link;
        printf("\n");
    }
}
void viewlist(){
    struct node *temp;
    temp = head;
    while(temp){
        printf("%.2f %d %c %s\n", temp->p, temp->q, temp->r, temp->s);
        temp = temp->link;
    }
}
