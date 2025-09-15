#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *head=NULL; //start with an empty list

void insertAtFront(int value){
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    if (newnode==NULL){
        printf("Memory allocation failed:");
        return;
    }
    newnode->data=value;
    newnode->next=head;
    head=newnode;
}
//function to print linked list
void printList(){
    struct node *temp = head; //temp is a pointer used to traverse the list 
    printf("Linked list is:");
    while (temp!=NULL){   //loop continues as long as temp is not NULL!! NULL= reached end of list
       printf("%d -> ", temp->data);//prints value stored in current node
       temp=temp->next; //updates temp to point to the next node in the list.
    }
    printf("NULL\n");
}

//MAIN FUNCTION
int main(){
    int n,value;
    printf("How many nodes do you want to insert at the front? ");
    scanf("%d", &n);
    for (int i=0;i<n;i++){
        printf("enter value for node %d:",i+1);
        scanf("%d",&value);
        insertAtFront(value);
    }
    printList();
    return 0;
}