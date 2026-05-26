#include<iostream>
#include<vector>
using namespace std;
class Node{
    public:
    int data;
    Node*left;
    Node*right;
    Node(int data){
        this->data=data;
        left=right=NULL;
    }
};
static int indx=-1;
Node*Buildtree(vector<int>nodes){
indx++;
if(nodes[indx]==-1){
    return NULL;
}
Node*currNode=new Node (nodes[indx]);
currNode->left=Buildtree(nodes);
currNode->right=Buildtree(nodes);
return currNode;
}
Node*LCA2(Node*root,int p, int q){
    if(root==NULL){
        return NULL;
    }
    if(root->data==p||root->data==q){
        return root;
    }
    Node*leftLCA=LCA2(root->left,p,q);
    Node*rightLCA=LCA2(root->right,p,q);
    if(leftLCA!=NULL&&rightLCA!=NULL){
        return root;
    }
    return leftLCA==NULL?rightLCA:leftLCA;
}

int main(){
    vector<int>nodes={1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Node*root=Buildtree(nodes);
    cout<<"the LCA IS: "<<LCA2(root,4,3)->data;
    

}

