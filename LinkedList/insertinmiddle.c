/*
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void insertAtMiddle(struct Node** head, int data, int position) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;

    if (position == 0 || *head == NULL) {
        newNode->next = *head;
        *head = newNode;
        return;
    }

    struct Node* temp = *head;
    for (int i = 0; i < position - 1 && temp->next != NULL; i++) {
        temp = temp->next;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}

void printList(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = NULL;

    // Insert nodes at various positions
    insertAtMiddle(&head, 10, 0); // Insert at beginning
    insertAtMiddle(&head, 20, 1); // Insert at position 1
    insertAtMiddle(&head, 30, 1); // Insert at position 1 again
    insertAtMiddle(&head, 40, 2); // Insert at position 2

    // Print the final linked list
    printList(head);

    return 0;
}
*/
#include <stdio.h>
#include <stdlib.h>

// Define the node structure
typedef struct node
{
    int data;
    struct node *next;
    struct node *prev;
} node;

node *head = NULL;

// Function to create a doubly linked list with 'val' nodes
void createdef(int val)
{
    node *temp = NULL;

    for (int i = 0; i < val; i++)
    {
        node *newnode = (node *)malloc(sizeof(node));
        if (newnode == NULL)
        {
            printf("Memory allocation failed\n");
            exit(1);
        }

        printf("Enter data for node %d: ", i + 1);
        scanf("%d", &newnode->data);
        newnode->next = NULL;
        newnode->prev = NULL;

        if (head == NULL)
        {
            head = newnode;
        }
        else
        {
            temp->next = newnode;
            newnode->prev = temp;
        }
        temp = newnode;
    }
}

// Function to print the doubly linked list
void printll()
{
    node *temp = head;
    printf("Doubly Linked List: ");
    while (temp != NULL)
    {
        printf("%d <-> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Optional: Function to free the list and avoid memory leaks
void freelist()
{
    node *temp = head;
    while (temp != NULL)
    {
        node *next = temp->next;
        free(temp);
        temp = next;
    }
}
void insertaThead(int val)
{
    node *newnode = (node *)malloc(sizeof(node));
    newnode->data = val;
    newnode->prev = NULL;

    if (head == NULL)
    {
        head = newnode;
    }
    else
    {
        newnode->next = head;
        head->prev = newnode;
        head = newnode;
    }
}

int main()
{
    int n;
    printf("Enter number of nodes: ");
    scanf("%d", &n);

    createdef(n);
    printll();
    insertaThead(5);
    printll();
    freelist(); // Clean up memory
    return 0;
}