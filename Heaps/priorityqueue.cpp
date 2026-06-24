#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int main(){
priority_queue<int,vector<int>,greater<int>>pq;
pq.push(5);
pq.push(4);
pq.push(3);
pq.push(10);
while(!pq.empty()){
    cout<<"top element is: "<<pq.top();
    pq.pop();
    cout<<endl;
}
}


