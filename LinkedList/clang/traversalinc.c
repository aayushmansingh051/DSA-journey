#include<stdio.h>
#include<stdlib.h>
struct Node{
int data;
struct Node*Next;
};
void linkedtraversal(int data,int head){
    struct Node*temp=head;
    while(temp!=NULL){
    printf("%d",temp->data);
    temp=temp->Next;
}
printf("NULL");
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



  


}
