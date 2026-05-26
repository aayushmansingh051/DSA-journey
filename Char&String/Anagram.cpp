#include<iostream>
#include<string>
using namespace std;
bool isAnagram(string str1,string str2){
    if( str1 != str2){
        cout<<" not a valid anagram";
      return false;

    }
    int arr[26]={0};
    for(int i=0;i<str1.length();i++){
        int idx=str1[i]-'a';
        arr[idx]++;
    }
        for(int i=0;i<str2.length();i++){
        int idx=str2[i]-'a';
        if(arr[idx]==0){
            cout<<"not a valid anagram";
            return false;
        }
        arr[idx]--;
    }
    cout<<"A valid Angram";
    return true;
   
}
int main(){
    string str1="anagram";
    string str2="cat";
isAnagram(str1,str2);
}