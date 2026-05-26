//left
//data
//right
#include<iostream>
#include<vector>
using namespace std;
class Node{
    public:
    int data;
    Node*Left;
    Node*Right;
    Node(int data){
        this->data=data;
        Left=Right=NULL;
    }
};
static int indx=-1;
Node*buildtree(vector<int>nodes){
indx++;
if(nodes[indx]==-1){
    return NULL;
}
Node*currnode=new Node(nodes[indx]);
currnode->Left=buildtree(nodes);
currnode->Right=buildtree(nodes);
return currnode;
}
void inoder(Node*root){
    if(root==NULL){
        return;
     }
    inoder(root->Left);
   cout<< root->data<<" ";
   inoder(root->Right);

}
int main(){
    vector<int>nodes={1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Node*root=buildtree(nodes);
    inoder(root);
}