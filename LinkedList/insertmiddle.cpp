#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

class List {
    Node* head;
    Node* tail;

public:
    List() {
        head = NULL;
        tail = NULL;
    }

    void push_front(int val) {
        Node* Newnode = new Node(val);
        if (head == NULL) {
            head = tail = Newnode;
        } else {
            Newnode->next = head;
            head = Newnode;
        }
    }

    void insertAtMiddle(int val, int pos) {
        Node* Newnode = new Node(val);
        Node* temp = head;

        for (int i = 0; i < pos - 1 && temp != NULL; i++) {
            temp = temp->next;
        }

        if (temp == NULL) {
            cout << "Position out of bounds\n";
            return;
        }

        Newnode->next = temp->next;
        temp->next = Newnode;
    }

    void printlist() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
};

int main() {
    List ll;
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    ll.printlist();

    ll.insertAtMiddle(100, 2);
    ll.printlist();  // Show updated list
}