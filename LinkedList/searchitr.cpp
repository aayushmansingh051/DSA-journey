#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* Next;

    Node(int val) {
        data = val;
        Next = NULL;
    }

    ~Node() {
        // Avoid recursive deletion to prevent stack overflow
        Next = NULL;
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

    ~List() {
        Node* current = head;
        while (current != NULL) {
            Node* next = current->Next;
            delete current;
            current = next;
        }
        head = tail = NULL;
    }

    void push_front(int val) {
        Node* Newnode = new Node(val);
        if (head == NULL) {
            head = tail = Newnode;
        } else {
            Newnode->Next = head;
            head = Newnode;
        }
    }

    void Printlist() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << "->";
            temp = temp->Next;
        }
        cout << "NULL" << endl;
    }

    // 🔍 Iterative Search
    int Searchitr(int key) {
        Node* temp = head;
        int idx = 0;
        while (temp != NULL) {
            if (temp->data == key) {
                return idx;
            }
            temp = temp->Next;
            idx++;
        }
        return -1;
    }
void pop_back() {


    Node* temp = head;
    while (temp->Next != tail) {
        temp = temp->Next;
    }
    delete tail;
    tail = temp;
    tail->Next = NULL;
}
  

};


int main() {
    List LL;
    LL.push_front(3);
    LL.push_front(5);
    LL.push_front(6);

    LL.Printlist();

    cout << "Iterative Search for 5: " << LL.Searchitr(5) << endl;
  

    cout << "Iterative Search for 10: " << LL.Searchitr(10) << endl;
    LL.pop_back();
    LL.Printlist();
    return 0;
}