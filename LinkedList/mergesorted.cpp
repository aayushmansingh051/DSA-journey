#include<iostream>
using namespace std;
class Node{
public:
int data;
 Node*next;    Node(int val){
        data=val;
        next=NULL;
    }

};
class List{
    public:
    Node*head;
    Node*tail;
    List(){
        head=NULL;
        tail=NULL;
    }
void push_front(int val){
    Node*Newnode=new Node(val);
  
        Newnode->next=head;
        head=Newnode;
    
}
void printlist(){
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
        }
        cout<<"NULL";
    }
    void merge(Node*left,Node*right)[
        List ans;
        Node*i=left;
        Node*j=right;
    ]
    Node*splitatmid(Node*head){
        Node*slow=head;
        Node*fast=head;
        Node*prev=NULL;
        while(fast!=NULL&& fast->next!=NULL){
            prev=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        if(prev!=NULL){
            prev->next=NULL;
        }
        return slow;
    }
     void mergesort(Node*head){
        if(head==NULL||head->next==NULL){
            return head;
        }
    
    Node*righthead=splitatmid(head);
   Node*right=  mergesort(head);
    Node*Left=  mergesort(right head);
    
   merge(head,right head);
    }
};
int main(){
 List ll;  // ✅ Correct object creation
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);  // ✅ Fixed typo
    ll.printlist();
}
