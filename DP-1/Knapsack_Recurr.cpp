#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int Knapsack(vector<int>val,vector<int>wt,int W,int n){
        // Base case
    if (n == 0 || W == 0) return 0;
    int itemwt=wt[n-1];
    int itemval=val[n-1];
    if(itemwt<=W){
        //include
        int ans1=Knapsack(val,wt,W-itemwt,(n-1))+itemval;
        //exclude
        int ans2=Knapsack(val,wt,W,(n-1));
        return max(ans1,ans2);
    }else{
        return Knapsack(val,wt,W,(n-1));
}
}
int main(){
    vector<int>val={15,14,10,45,30};
    vector<int>wt={2,5,1,3,4};
    int W=7;
    int n=5;
    cout<<"Knapsack: "<<Knapsack(val,wt,7,5);
}