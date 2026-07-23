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
bool helper(Tries &trie, string key) {
    if (key.size() == 0) return true;

    for (int i = 0; i < key.size(); i++) {
        string first = key.substr(0, i + 1);
        string second = key.substr(i + 1);

        if (trie.search(first) && helper(trie, second)) {
            return true;
        }
    }
    return false;
}

void worldBreakproblem(vector<string>& dict, string key) {
    Tries trie;
    for (int i = 0; i < dict.size(); i++) {
        trie.insert(dict[i]);
    }
    if (helper(trie, key)) cout << "Can be segmented\n";
    else cout << "Cannot be segmented\n";
}


};
    int main() {
    Tries t;
    t.insert("hello");
    t.insert("world");

    cout << (t.search("hello") ? "Found" : "Not Found") << endl;
    cout << (t.search("world") ? "Found" : "Not Found") << endl;
    cout << (t.search("hi") ? "Found" : "Not Found") << endl;

    vector<string> dict = {"hello", "world"};
    string key = "helloworld";
    t.worldBreakproblem(dict, key);

    return 0;
}
