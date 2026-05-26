#include<iostream>
#include<stack>
#include<string>
using namespace std;
class reversal{
    public:
    string reversestring(string str){
        string ans;
        stack<char>s;
        for(int i=0;i<str.size();i++){
        s.push(str[i]);
        }
        while(!s.empty()){
            ans+=s.top();
            s.pop();
        }
        return ans;
    }
};
int main(){
    string str="Aayushman";
    reversal r;
    cout<<"the reverse is:"<<r.reversestring(str);
}
