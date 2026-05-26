#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*Next;
    Node*Back;
Node(int val){
data=val;
Next=NULL;
}
~Node(){
    if(Next!=NULL){
        delete Next;
        Next==NULL;
    }
}
};


class List{
        Node*head;
        Node*tail;
    public:
        List(){
        head=NULL;
        tail=NULL;
        }
        ~List(){
            if(head!=NULL){
                delete head;
                head==NULL;
            }
        }
    Node*removeKthelement(Node*head,int K){
        if(head==NULL){
            return;
            int cnt=0;
            Node*knode=head;
            while(knode!=NULL){
                cnt++;
                if(cnt==K) break;
                knode=knode->Next;
            }
            Node*prev=knode->Back;
            Node*front=Knode->Next;
            if(prev==NULL&&front==NULL){
                return;
            }
            else if(prev==NULL){
                return deleteHead;
            }
            else{
                return deletetail;
            }
            prev->Next=front;
            front->Back=prev;
            knode->Next=NULL;
            knode->Back=NULL;
            delete knode;
            return head;
        }
    }
    
    





}

