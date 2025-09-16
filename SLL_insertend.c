#include <stdio.h>
#include <stdlib.h>

// Define the structure of a node
struct node {
    int data;
    struct node* next;
};

// Global head pointer to track the start of the list
struct node* head = NULL;

// Function to create a linked list with n nodes
void createList(int n) {
    int value;
    struct node* newnode, *temp;

    for (int i=0; i<n; i++) {
        // Allocate memory for new node
        newnode = (struct node*)malloc(sizeof(struct node));
        if (newnode == NULL) {
            printf("Memory allocation failed\n");
            return;
        }

        // Input data for the node
        printf("Enter value for node %d: ", i + 1);
        scanf("%d", &value);
        newnode->data = value;
        newnode->next = NULL;

        // If list is empty, set head to new node
        if (head == NULL) {
            head = newnode;
            temp = head;
        } else {
            // Link new node at the end
            temp->next = newnode;
            temp = newnode;
        }
    }
}

// Function to insert a node at the end of the existing list
void insertAtEnd(int value) {
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    if (newnode==NULL) {
        printf("Memory allocation failed\n");
        return;
    }

    newnode->data = value;
    newnode->next = NULL;

    // If list is empty, new node becomes the head
    if (head == NULL) {
        head = newnode;
    } else {
        struct node* temp = head;
        // Traverse to the last node
        while (temp->next != NULL) {
            temp = temp->next;
        }
        // Link new node at the end
        temp->next = newnode;
    }
}

// Function to print the linked list
void printList() {
    struct node* temp = head;
    printf("Linked List: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Main function to test the operations
int main() {
    int n, value;

    // Step 1: Create initial list
    printf("How many nodes do you want to create initially? ");
    scanf("%d", &n);
    createList(n);
    printList();

    // Step 2: Insert a node at the end
    printf("Enter value to insert at the end: ");
    scanf("%d", &value);
    insertAtEnd(value);
    printList();

    return 0;
}