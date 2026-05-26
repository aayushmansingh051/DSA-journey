#include<iostream>
#include<vector>
#include<stack>
#include<string>
using namespace std;
void nextGreater(vector<int>arr,vector<int>ans){
    stack<int>s;
   
int n=arr.size();
for(int i=n-1;i>=0;i--){
    while(!s.empty()&&s.top()<=arr[i]){
        s.pop();
    }
    ans[i]=s.empty()?-1:s.top();
    s.push(arr[i]);
}
for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<",";
}
}
int main(){
    vector<int> arr={6,8,0,1,3};
    vector<int> ans={0,0,0,0,0};

    nextGreater(arr,ans);
}