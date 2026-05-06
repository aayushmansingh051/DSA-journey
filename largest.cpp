#include<iostream>
#include<vector>
using namespace std;
int largest(vector<int>&arr){
    int largest=arr[0];

    for(int i=0;i<arr.size();i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    return largest;
}
int main(){
    vector<int> v={1,2,4,7,4};
    
    cout<<"the  largest elemnent is: "<<largest(v);
}