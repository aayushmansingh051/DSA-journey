#include<stdio.h>
#include<stdlib.h>
struct Node{
int data;
struct Node*Next;
};
void linkedtraversal(struct Node*head){
    struct Node*temp=head;
    while(temp!=NULL){
    printf("%d->",temp->data);
    temp=temp->Next;
}
printf("NULL");
}
void push_front(struct Node*head){
   struct Node*Newnode=(struct Node*)malloc(sizeof(struct Node));
   
    if(head==NULL){
        head=Newnode;

    }else{
        Newnode->Next=head;
        head=Newnode;
    }
}
void pop_back(struct Node*head){
    struct Node*temp=head;
        // If only one node
    if (temp->Next == NULL) {
        free(temp);
        head== NULL;
        return;
    }

    // Traverse to second last node

    while(temp->Next->Next!=NULL){
        temp=temp->Next;
    }
    temp->Next=NULL;
    free(temp->Next);
    temp->Next=NULL;
}
    
int main(){
 struct Node*head;
 struct Node*second;
 struct Node*third;
 struct Node*fourth;

 head=(struct Node*)malloc(sizeof(struct Node));
 second=(struct Node*)malloc(sizeof(struct Node));
 third=(struct Node*)malloc(sizeof(struct Node));
 fourth=(struct Node*)malloc(sizeof(struct Node));

 head->data=7;
 head->Next=second;

 second->data=12;
 second->Next=third;

 third->data=13;
 third->Next=fourth;

 fourth->data=19;
 fourth->Next=NULL;
 linkedtraversal(head);
pop_back(head);
}
