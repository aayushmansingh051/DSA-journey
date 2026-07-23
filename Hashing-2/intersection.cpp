#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
void printintersection(vector<int>arr1,vector<int>arr2){
    unordered_set<int>m;
    for(int i=0;i<arr1.size();i++){
     m.insert(arr1[i]);
    }
    for(int i=0;i<arr2.size();i++){
        if(m.count(arr2[i])){
            cout<<arr2[i]<<",";
            m.erase(arr2[i]);
        }
        
    }
cout<<endl;
}

int main(){
    vector<int>arr1={7,3,9};
    vector<int>arr2={6,3,9,2,9,4};
    printintersection(arr1,arr2);
}
