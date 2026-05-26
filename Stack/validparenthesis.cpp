#include<iostream>
#include<vector>
#include<stack>
#include<string>
using namespace std;
bool isValid(string str){
    stack<char>s;
    for(int i=0;i<str.size();i++){
        if(str[i]=='('||str[i]=='['||str[i]=='{'){
            s.push(str[i]);
        }else{//closing
            if(s.empty()){
                return false;
            }
            if(s.top()=='('&& str[i]==')'||
            s.top()=='['&& str[i]==']'||
        s.top()=='{'&& str[i]=='}'){
            s.pop();
        }
        else{
            return false;
        }
        }
    }
    return s.empty();
   }
   int main(){
    string str1="([}])";
    string str2="([{}])";

    cout<<isValid(str1);
    cout<<isValid(str2);
   }
