#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>
using namespace std;
class Node{
    public:
    unordered_map<char,Node*>children;
    bool endofword=false;
    int freq;
};
class Tries{
    Node*root;
    public:
    Tries(){
    root=new Node();
    root->freq=-1;
    }

void insert(string &key){
Node*temp=root;
for(int i=0;i<key.size();i++){
    if(temp->children.count(key[i])==0){
        temp->children[key[i]]=new Node();
        temp->children[key[i]]->freq=1;
    }
    else{
        temp->children[key[i]]->freq++;
    }
    temp=temp->children[key[i]];
}
temp->endofword=true;
}
string getPrefix(string key){
    Node*temp=root;
    string prefix="";
    for(int i=0;i<key.size();i++){
        prefix+=key[i];
       
        if(temp->children[key[i]]->freq==1){
            break;
        }
         temp=temp->children[key[i]];
    }
return prefix;
}

void PrefixProblem(vector<string>&dict){
    Tries trie;
    for(int i=0;i<dict.size();i++){
        trie.insert(dict[i]);   

}
 for(int i=0;i<dict.size();i++){
    cout<<trie.getPrefix(dict[i]);

}
}
};
int main() {
    vector<string> dict = {"zebra", "dog", "duck", "dove"};
    Tries t;
    t.PrefixProblem(dict);
    return 0;
}

