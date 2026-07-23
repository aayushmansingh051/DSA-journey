#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>
using namespace std;
class Node{
    public:
    unordered_map<char,Node*>children;
    bool endofword=false;
};
class Trie{
    public:
    Node*root;
    Trie(){
    root=new Node();
    }
void insert(string key){
  Node*temp=root;
  for(int i=0;i<key.size();i++){
  if(temp->children.count(key[i])==0){
    temp->children[key[i]]=new Node();
  }
  temp=temp->children[key[i]];
  }
   temp->endofword=true;
}
bool search(string key){
    Node*temp=root;
    for(int i=0;i<key.size();i++){
        if(temp->children.count(key[i])==0){
            return false;
        }
        temp=temp->children[key[i]];
    }
    return temp->endofword;
}
int countNodes(Node*root){
 int ans=0;
 for(pair<char,Node*>m:root->children){
    ans+=countNodes(m.second);
 }
return ans+1;
}
int countUniquesubstring(string str){
    Trie trie;
    for(int i=0;i<str.size();i++){
        string suffix=str.substr(i);
        trie.insert(suffix);
    }
    return trie.countNodes(trie.root)-1;
}
};
int main() {
    Trie t;
    string s = "aba";
    cout << "Unique substrings: " << t.countUniquesubstring(s) << endl;
    return 0;
}