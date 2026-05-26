#include<iostream>
using namespace std;
template <class T>

class Node{
    public:
    T data;
    Node*next;
    Node(T val){
        data=val;
        next=NULL;
    }
};

template <class T>
class stack{
Node<T>*head;
public:
stack(){
    head=NULL;
}
void push(T val){
    
        Node<T>*newnode=new Node<T>(val);
        newnode->next=head;
        head=newnode;
    }
    void pop(){
        if(isEmpty()){
            cout<<"the stack is empty";
        }else{
        Node<T>*temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
        }
    }
    T top(){
        if(isEmpty()){
            cout<<"the stack is empty";
            return T();
        }
        else{
            return head->data;
        }
    }
bool isEmpty(){
    return head==NULL;
}
};

int main() {
    stack<int> s;
    s.push(10);
    s.push(20);
    cout << "Top: " << s.top() << endl; // Output: 20
    s.pop();
    cout << "Top after pop: " << s.top() << endl; // Output: 10
    return 0;
}
                