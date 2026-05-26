
#include<iostream>
#include<map>
#include<string>
using namespace std;

int main(){
    map<int,string>m;
    m[101]= "Aayushman";
    m[102]= "Aaryav";
    m[103]= "Aniket";

    m[101]="Abhi mukj me kahi";
 
    cout<<m[101]<<endl;
    cout<<m.count(102)<<endl;
    for(auto a:m){
     cout<<"key= "<<a.first<<","<<"second= "<<a.second<<endl;
    }
}

