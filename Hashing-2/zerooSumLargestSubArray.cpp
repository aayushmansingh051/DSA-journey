#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
int largest0sum(vector<int>arr){
    unordered_map<int,int>m;
    int sum=0;
    int ans=0;
    for(int j=0;j<arr.size();j++){
    sum+=arr[j];

    if(m.count(sum)){//(sum-0)
     int currlen=j-m[sum];
     ans=max(ans,currlen);
    }else{  
        m[sum]=j;   
    }
}
return ans;
}
int main(){
    vector<int>arr={15,-2,2,-8,1,7,10}; 
       cout << "Length of largest zero-sum subarray: " << largest0sum(arr) << endl;
    return 0;
}