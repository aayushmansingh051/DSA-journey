#include<iostream>
#include<vector>
#include<string>
using namespace std;
int lcsMemo(string str1,string str2,vector<vector<int>>&dp){
    int n=str1.size();
    int m=str2.size();
    if(str1.size()==0||str2.size()==0){
        return 0;
    }
    if(dp[n][m]!=-1){ //already calculated
        return dp[n][m];
    }
    // agar nahi toh yaha cal kiya ja raha hai aur values ko dp[n][m] me store kiya ja raha hai
    if(str1[n-1]==str2[m-1]){//agar last wala char same hai toh substring form 0 to index to n-1(last index kaam karna hai)
        dp[n][m]= 1+lcsMemo(str1.substr(0,n-1),str2.substr(0,m-1),dp);
    }else{
        int ans1= lcsMemo(str1.substr(0,n-1),str2.substr(0,m),dp);
        int ans2= lcsMemo(str1.substr(0,n),str2.substr(0,m-1),dp);
        dp[n][m]= max(ans1,ans2);
    }
    return dp[n][m];
}
int main(){
    string str1="abcdge";
    string str2="abedg";
    int n=str1.size();
    int m=str2.size();
    vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
    cout<<"longst common subsequence By recurrsion is: "<<lcsMemo(str1,str2,dp);
}