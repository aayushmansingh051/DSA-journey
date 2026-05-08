#include<iostream>
#include<vector>
using namespace std;

int majorityelement(vector<int>& nums){

    int candidate = 0;
    int count = 0;

    for(int num : nums){

        if(count == 0){
            candidate = num;
        }

        if(candidate == num){
            count++;
        }
        else{
            count--;
        }
    }

    return candidate;
}

int main(){

    vector<int> nums = {3,2,3};

    cout << majorityelement(nums);
}