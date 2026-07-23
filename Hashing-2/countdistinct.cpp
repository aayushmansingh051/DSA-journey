#include<iostream>
#include<vector>
#include<string>
#include<unordered_set>
using namespace std;
int countDistinct(vector<int>arr){
    unordered_set<int>s;
    for(int i=0;i<arr.size();i++){
        s.insert(arr[i]);
    }
    for(auto el:s){
        cout<<el<<",";
    }
    return s.size();
}
int main(){
    vector<int>arr={4,3,2,5,6,6,7,6,3};
    cout<<"COUNT: "<<countDistinct(arr);
}