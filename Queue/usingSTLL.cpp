#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int>q;
    q.push(5);
    q.push(4);
    q.push(3);
    while(!q.empty()){
    cout<<q.front()<<endl;
    q.pop();
    }
}