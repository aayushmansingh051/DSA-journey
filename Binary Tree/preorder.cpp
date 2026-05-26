            #include<iostream>
#include<vector>
using namespace std;
class Node{
public:
int data;
Node*left;
Node*Right;
Node(int data){
    this->data=data;
    left=Right=NULL;
}
 };

static int indx = -1;
Node*buildTree(vector<int>nodes){
indx++;
if(nodes[indx]==-1){
    return NULL;
}
Node*currNode=new Node(nodes[indx]);
currNode->left=buildTree(nodes);//LEFT SUBTREE
currNode->Right=buildTree(nodes);//RIGHT SUBTREE
return currNode;
}
void preoder(Node*root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preoder(root->left);
    preoder(root->Right);


}


int main(){
    vector<int>nodes={1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Node*root=buildTree(nodes);
preoder(root);
    cout<<"root= "<<root->data<<endl;
    return 0;
}