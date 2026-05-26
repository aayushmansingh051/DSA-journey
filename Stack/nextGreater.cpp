#include<iostream>
#include<vector>
#include<stack>
#include<string>
using namespace std;
void nextGreater(vector<int>arr,vector<int>ans){
    stack<int>s;
    int index=arr.size()-1;
    ans[index]=-1;
    s.push(arr[index]);
        for(index=index-1;index>=0;index--){
            int curr=arr[index];
while(!s.empty() && curr>=s.top()){
    s.pop();
}
if(s.empty()){
    ans[index]=-1;

}
else{
    ans[index]=s.top();
}
s.push(curr);
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