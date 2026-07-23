#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
void printunion(vector<int>arr1,vector<int>arr2){
unordered_set<int>m;
for(int i=0;i<arr1.size();i++){
    m.insert(arr1[i]);
}
for(int i=0;i<arr2.size();i++){
    m.insert(arr2[i]);
}
for(auto it:m){
    cout<<it<<",";
}
cout<<endl;
}
int main(){
    vector<int>arr1={7,3,9};
    vector<int>arr2={6,3,9,2,9,4};
    printunion(arr1,arr2);
}
