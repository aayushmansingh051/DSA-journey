#include<iostream>
#include<vector>
using namespace std;
vector<int> sortedarray(vector<int>&a,vector<int>&b){
    vector<int>unionarray;
    int i=0;
    int j=0;
    while(i<a.size() && j<b.size()){
        if(a[i]<=b[j]){
            if( unionarray.empty() || unionarray.back()!=a[i] ){
                 unionarray.push_back(a[i]);
                 
            }
            i++;
        }else{
            if( unionarray.empty() || unionarray.back()!=b[j] ){
        unionarray.push_back(b[j]);
       
        }
        j++;
    }
         
    }
    while(i<a.size()){
        
            if( unionarray.empty() || unionarray.back()!=a[i] ){
                 unionarray.push_back(a[i]);
                 
            }
        i++;
    }
    while(j<b.size()){
       
            if( unionarray.empty() || unionarray.back()!=b[j] ){
                 unionarray.push_back(b[j]);
                 
    
            }
            j++;
        
    

}
    return unionarray;
}
int main() {
    vector<int> a = {1, 1, 2, 4};
    vector<int> b = {1, 1, 2, 3, 4, 5, 6};

    vector<int> result = sortedarray(a, b);

    cout << "The sorted union array is: ";
    for (int x : result) {
        cout << x << " ";
    }
    return 0;
}