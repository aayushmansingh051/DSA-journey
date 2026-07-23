#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Node{
    public:
    string key;
    int val;
    Node*next;
    Node(string key, int val){
        this->key=key;
        this->val=val;
        next=NULL;
    }
};

class HastTable{
    int totsize;
    int currsize;
    Node**table;

  int HashFunc(string key) {
        int indx = 0;
        for (int i = 0; i < key.size(); i++) {
            indx = (indx + key[i]) % totsize;  // simpler hash
        }
        return indx;
    }
    public:
    HastTable(int size){
    totsize=size;
    currsize=0;
    table=new Node*[totsize];
    for(int i=0;i<totsize;i++){
        table[i]=NULL;
    }
    }
void insert(string key,int val){
int indx=HashFunc(key);
Node*Newnode=new Node(key,val);
Node*head=table[indx];
Newnode->next=head;
table[indx]=Newnode;
currsize++;
}
};
int main(){
HastTable Ht(10);
 Ht.insert("apple", 100);
 Ht.insert("banana", 200);
}
