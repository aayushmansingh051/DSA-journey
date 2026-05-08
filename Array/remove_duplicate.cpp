#include<iostream>
#include<vector>
using namespace std;
int remove_duplicate(vector<int>&nums){
    int i=0;
    for(int j=1;j<nums.size();j++){
        if(nums[i]!=nums[j]){
            nums[i+1]=nums[j];
            i++;
        }
    }
    cout<<"After removing is: "<<endl;
    for(int j=0;j<=i;j++){
        cout<<nums[j]<<",";
    }
    return i+1;

}
int main(){
    vector<int> nums={1,1,2,3,4,7,7};
    cout<<"after duplicate is removed: "<<remove_duplicate(nums)<<endl;
   
}
