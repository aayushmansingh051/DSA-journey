#include<iostream>
#include<string>
#include<vector>
#include<unordered_map>
using namespace std;
class Node{
    public:
    unordered_map<char,Node*>children;
    bool endofword=false;
};
class Tries{
    Node*root;
    public:
    Tries(){
    root=new Node();
    }

void insert(string key){
    Node*temp=root;
    for(int i=0;i<key.size();i++){
        if(temp->children.count(key[i])==0){
            temp->children[key[i]]=new Node();
        }
         temp = temp->children[key[i]];
    }
        temp->endofword=true;

}
 bool search(string key) {
        Node*temp=root;
        for (int i = 0; i < key.size(); i++) {
            if (temp->children.count(key[i])) {
                temp->children[key[i]];
            }else{
                return false;
            }
            temp = temp->children[key[i]];
        }
        return temp->endofword;
    }

};
int main() {
    Tries t;
    t.insert("hello");
    t.insert("world");

    cout << (t.search("hello") ? "Found" : "Not Found") << endl;
    cout << (t.search("world") ? "Found" : "Not Found") << endl;
    cout << (t.search("hi") ? "Found" : "Not Found") << endl;

    return 0;
}