#include<iostream>
#include<cstring>
using namespace std;
bool ispalindrome(char word[],int n){
     int start=0;
     int end=n-1;
     while(start<end){
        if(word[start]!=word[end]){
            cout<<"not a valid palindrome";
            return false;
            
        }
        start++;
        end--;
        
     }
     cout<<" a valid palindrome";
return true;
  
}
int main(){
    char word[]="ma'am";
    ispalindrome(word,strlen(word));

}