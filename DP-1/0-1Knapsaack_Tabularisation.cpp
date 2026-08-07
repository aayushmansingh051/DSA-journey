#include<iostream>
#include<vector>
using namespace std;
int Knapsack(vector<int>val,vector<int>wt,int W,int n,vector<vector<int>>dp){
    for(int i=1;i<n+1;i++){
        for(int j=1;j<W+1;j++){
              int itemwt=wt[i-1];
              int itemval=val[i-1];
  
      
    if(itemwt<=W){
        //include
        int ans1=Knapsack(val,wt,W-itemwt,(n-1),dp)+itemval;
        //exclude
        int ans2=Knapsack(val,wt,W,(n-1),dp);
        dp[i][W]= max(ans1,ans2);
    }else{
        //exclude
        dp[i][W]=  Knapsack(val,wt,W,(n-1),dp);
  }
 }
}
return dp[n][W]; //answer
     
}
int main(){
    vector<int>val={15,14,10,45,30};
    vector<int>wt={2,5,1,3,4};
     int W=7;
    int n=5;
    vector<vector<int>>dp(n+1,vector<int>(W+1,0)); // 2d matrix where n+1 rows and, w+1 where it is inintialized by -1;
   

    cout<<"Knapsack: "<<Knapsack(val,wt,7,5,dp);
}
