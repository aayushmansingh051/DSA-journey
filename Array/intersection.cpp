#include<iostream>
#include<vector>
using namespace std;
vector<int> intersection(vector<int>&a,vector<int>&b){
    vector<int> ans;
    int i=0;
    int j=0;
    while(i<a.size() && j<b.size()){
        if(a[i]<b[j]){
            i++;
        }else if(a[i]>b[j]){
           
            j++;
        }
        else{
         ans.push_back(a[i]);
         i++;
         j++;
        }
    }
    return ans;

}
int main(){
    vector<int> a = {1,3,5};
    vector<int> b = {2,3,4};
    vector<int> res = intersection(a,b);
    
    cout << "Intersection elements: ";
    for(int x : res){
        cout << x << " ";
    }
}