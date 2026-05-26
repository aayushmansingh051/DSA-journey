#include<iostream>
#include<vector>
using namespace std;
int firstoccurrence(vector<int>arr,int i,int target){
        if(i==arr.size()){
              return -1;
         }
        if(arr[i]==target){
            return i;
        }
            return firstoccurrence(arr,i+1,target);
        
    }

    int lastoccurrence(vector<int>arr,int i,int target){
        if(i==arr.size()){
              return -1;
         }
         int res=lastoccurrence(arr,i+1,target);
        
         if( res==-1 && arr[i]==target){
            return i;
        
    }
            return res;
        
    }



int main(){
    vector<int>arr={1,23,33,4,56};
  cout<<firstoccurrence(arr,0,58);
  //cout<<lastoccurrence(arr,0,56);
}