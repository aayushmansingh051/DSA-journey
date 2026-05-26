#include<iostream>
#include<stack>
using namespace std;
void pushAtbottom(stack<int>s,int val){
    if(s.empty()){
        s.push(val);
    }
    int temp=s.top();
    pushAtbottom(s,val);
    s.push(temp);

}
int main(){
    stack<int>s;
    s.push(3);
    s.push(2);
    s.push(1);
    while(!s.empty()){
     cout<<s.top()<<" ";
    s.pop();

    }

}