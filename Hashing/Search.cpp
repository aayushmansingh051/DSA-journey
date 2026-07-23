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
class Hashtable{
    int totsize;
    int currsize;
    Node**table;
        
    int HashFunc(string key){
        int indx=0;
        for(int i=0;i<key.size();i++){
        indx=(indx+key[i]*key[i])%totsize;
          }
    return indx;
}
    public:
     Hashtable(int size){
         totsize=size;
         currsize=0;
        table=new Node*[totsize];
        for(int i=0;i<totsize;i++){
            table[i]=NULL;
        }
    }
    void insert(string key, int val){
        int indx=HashFunc(key);
      Node*head=table[indx];
      Node*Newnode=new Node(key,val);
      Newnode->next=head;
      table[indx]=Newnode;
      currsize++;
    }
    bool exist(string key){
        int indx=HashFunc(key);
        Node*temp=table[indx];
        while(temp!=NULL){
          if(temp->key==key){
            return true;
          }
          temp=temp->next;
        }
        return false;
    }
    int search (string key){
        int indx=HashFunc(key);
        Node*temp=table[indx];
        while(temp!=NULL){
            if(temp->key==key){
                return temp->val;
            }
            temp=temp->next;
        }
        return -1;
    }
    


};
int main() {
    Hashtable Ht(10);
    Ht.insert("apple", 100);
    Ht.insert("banana", 200);

    // Check if "apple" exists
    if (Ht.exist("apple")) {
        cout << "Apple value: " << Ht.search("apple") << endl;
    }

    // Check if "banana" exists
    if (Ht.exist("banana")) {
        cout << "Banana value: " << Ht.search("banana") << endl;
    }

    // Try a key that doesn't exist
    cout << "Mango value: " << Ht.search("mango") << endl;
}