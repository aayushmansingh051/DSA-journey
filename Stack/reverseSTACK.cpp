#include<iostream>
#include<stack>
using namespace std;
class stackOps {
public:
    void pushAtBottom(stack<int>& s, int val) {
         if (s.empty()) {
            s.push(val);
            return;
        }
        int temp = s.top();
       s.pop();
        pushAtBottom(s, val);
        s.push(temp);
    }

    void reverseStack(stack<int>& s) {         //khali container me store kar rahe h aur delete
        if (s.empty()) {
            return;
        }
        int temp = s.top();
        s.pop();
        reverseStack(s);
        pushAtBottom(s, temp);
    }

    void printStack(stack<int> s) {
        while (!s.empty()) {
            cout << s.top() << " ";
            s.pop();
        }
        cout << endl;
    }
};

int main() {
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    stackOps ops;
    cout << "Original Stack: ";
    ops.printStack(s);

    ops.reverseStack(s);
    cout << "Reversed Stack: ";
    ops.printStack(s);

    return 0;
}
