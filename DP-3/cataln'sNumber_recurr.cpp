#include<iostream>
#include<vector>
using namespace std;
int CatalNumbers(int n){
    int ans=0;
    if(n==1||n==0){
        return 1;
    }

    for(int i=0;i<n;i++){
        ans+=CatalNumbers(i)*CatalNumbers(n-i-1);
    }
    return ans;

}
int main(){
    int n=4;
    cout<<"the cataln's Number for the following number is: "<<CatalNumbers(n)<<endl;
}