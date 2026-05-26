#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
    struct node *prev;
} node;
node *head = NULL;
void createdef(int val)
{
    node *newnode = (node *)malloc(sizeof(node));
    for (int i = 0; i < val; i++)
    {
        printf("data are: %d", i + 1);
        scanf("%d", &newnode->data);
        newnode->next = NULL;
        newnode->prev = NULL;
        node *temp;
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
void printll(){
    node*temp=head;
    while(temp!=NULL){
        printf("%d <->",temp->data);
        temp=temp->next;
    }
printf("NULL");

}
int main(){
    createdef(5);
    printll();
}