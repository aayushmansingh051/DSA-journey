#include<iostream>
#include<vector>
using namespace std;
bool TargetSum_Subset(vector<int>nums,int target){
    int n=nums.size();
   vector<vector<int>>dp(n+1,vector<int>(target+1,0));
   for(int i=1;i<=n;i++){
    for(int j=1;j<=target;j++){
        if(nums[i-1]<=j){
        //  dp[i][j]=max(include,exclude)
        //  dp[i][j]=max(itemval+dp[i-1][j-itemwt],dp[i-1][j])
            
        }
        else
        dp[i][j]=dp[i-1][j];
    }

}
   return dp[n][target]==target;
}
int main(){
    vector<int>nums={4,2,7,1,3};
    int target=7;
    cout<<TargetSum_Subset(nums,target);
}

