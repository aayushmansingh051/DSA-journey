#include<iostream>
#include<queue>
#include<string>
using namespace std;
void FirstNonRepeating(string str){
    int freq[26]={0};
    queue<char>q;
    for(int i=0;i<str.size();i++){
        q.push(str[i]);
        freq[str[i]-'a']++;

        while(!q.empty()&&freq[q.front()-'a']>1){
            q.pop();

        }
        if(q.empty()){
            cout<<"-1"<<endl;
        }
        else{
            cout<<q.front()<<endl;
        }
    }
}
int main(){
    string str="aabccxb";
   FirstNonRepeating( str);
}
