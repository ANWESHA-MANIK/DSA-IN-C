#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node* next;
};

struct node *head = NULL;
void createlist(int n){
    struct node *newnode,*temp;
    int value;

    for (int i=0;i<n;i++){
        newnode=(struct node*)malloc(sizeof(struct node));
        if (newnode==NULL){
            printf("Memory allocation failed\n");
            return;
        }
        printf("Enter value for node %d: ", i + 1);
        scanf("%d", &value);
        newnode->data=value;
        newnode->next=NULL;

        if (head==NULL){
           head=newnode;
           temp=head;
        } else{
           temp->next=newnode;
           temp=newnode;
        }
    }
}

//FUNCTION TO DISPLAY LIST
void displaylist(){
    struct node *temp=head;
    printf("Linked List:");
    while (temp != NULL) {
        printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("NULL\n");
}

int main() {
    int n;
    printf("How many nodes do you want to create? ");
    scanf("%d", &n);

    createlist(n);
    displaylist();

    return 0;
}

