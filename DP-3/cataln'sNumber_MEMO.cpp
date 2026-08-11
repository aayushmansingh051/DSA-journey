 #include<iostream>
#include<vector>
using namespace std;
int CatalNumbers(int n, vector<int>&dp){
    int ans=0;
    if(n==1||n==0){
        return 1;
    }
    if(dp[n]!=-1){
        return dp[n];
    }

    for(int i=0;i<n;i++){
        ans+=CatalNumbers(i,dp)*CatalNumbers(n-i-1,dp);
    }
    return dp[n] = ans; 

}
int main(){
    int n=4;
    vector<int>dp(n+1,-1);
    cout<<"the cataln's Number for the following number is: "<<CatalNumbers(n,dp)<<endl;
}