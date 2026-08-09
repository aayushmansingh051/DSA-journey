//by tabulation
#include<iostream>
#include<vector>
#include<string>
using namespace std;
int LCS_tabulation(string str1,string str2){
    int n=str1.size();
    int m=str2.size();
    int ans=0;
    vector<vector<int>>dp(n+1,vector<int>(m+1,0));
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(str1[i-1]==str2[j-1]){
                dp[i][j]=1+dp[i-1][j-1];
            }else{//NO
                dp[i][j]=0;

            }
            ans=max(ans,dp[i][j]);

        }
    }
     for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }
    return ans;
}
int main(){
    string str1="abcde";
    string str2="abgce";
    cout<<"the longest common substring is: "<<LCS_tabulation(str1,str2);
}
