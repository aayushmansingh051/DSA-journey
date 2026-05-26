#include<iostream>
#include<vector>
#include<stack>
#include<string>
using namespace std;
bool duplicate(string str){
    stack<char>s;
    for(int i=0;i<str.size();i++){
        if(str[i]!=')'){
            s.push(str[i]);
        }else{
            if(s.top()=='('){
                return true;
            }
            while(s.top()!='('){
                s.pop();
            }
            s.pop();
        }
    }
    return false;
}
int main(){
    string str1="((a+b)+(c+d))";
    string str2="((a+b))";
    cout<<duplicate(str1);
    cout<<duplicate(str2);
}