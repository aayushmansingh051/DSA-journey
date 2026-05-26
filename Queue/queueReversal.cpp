#include<iostream>
#include<stack>
#include<queue>
using namespace std;
void Reverse(queue<int>&q){
    stack<int>s;
    while(!q.empty()){
        s.push(q.front());
q.pop();
        }
        while(!s.empty()){
            q.push(s.top());
            s.pop();
        }
    }
int main(){
    queue<int>q;
    q.push(5);
    q.push(4);
    q.push(3);
    Reverse(q);
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
}
