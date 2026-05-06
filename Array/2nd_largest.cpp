#include<iostream>
#include<vector>
using namespace std;
int largest(vector<int>&nums){
    int largest=nums[0];
    for(int i=0;i<nums.size();i++){
        if(nums[i]>largest){
            largest=nums[i];
        }
    }
    return largest;
}
int second_largest(vector<int>&nums){
   int firstlargest= largest(nums);
    int secondlargest=-1;
    for(int i=0; i<nums.size();i++){
        if(nums[i]>secondlargest&&nums[i]!=firstlargest){
            secondlargest=nums[i];
        }
    }
return secondlargest;
}
int main(){
    vector<int> v={1,2,4,5,6};
    cout<<"the second largest elemnent is: "<<second_largest(v);
}
