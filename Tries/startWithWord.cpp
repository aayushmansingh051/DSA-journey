#include<iostream>
#include<vector>
#include<unordered_map>
#include<string>
using namespace std;
class Node{
    public:
    unordered_map<char,Node*>children;
    bool endofword=false;
};
class Trie{
    Node*root;
    public:
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
 bool startsWith(string key) {
    Node* temp = root;
    for (int i = 0; i < key.size(); i++) {
        if (temp->children.count(key[i]) == 0) {
            return false;
        }
        temp = temp->children[key[i]];
    }
    return true;
}
};
int main() {
    Trie t;
    t.insert("hello");
    t.insert("world");

    cout << (t.search("hello") ? "Found" : "Not Found") << endl;
    cout << (t.search("world") ? "Found" : "Not Found") << endl;
    cout << (t.search("hi") ? "Found" : "Not Found") << endl;
     

     cout << (t.startsWith("wo") ? "Prefix Found" : "Prefix Not Found") << endl;
    cout << (t.startsWith("he") ? "Prefix Found" : "Prefix Not Found") << endl;
    cout << (t.startsWith("hi") ? "Prefix Found" : "Prefix Not Found") << endl;
    return 0;
}

