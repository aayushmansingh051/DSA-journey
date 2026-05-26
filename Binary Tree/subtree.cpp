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
    Node*currNode=new Node(nodes[indx]);
    currNode->left=Buildtree(nodes);
    currNode->right=Buildtree(nodes);
    return currNode;
}
bool identical(Node*root1,Node*root2){
    if(root1==NULL&&root2==NULL){
        return true;
    }
    else if(root1==NULL||root2==NULL){
        return false;
    }
    if(root1->data!=root2->data){
        return false;
    }
    return identical(root1->left, root2->left)
     && identical(root1->right, root2->right);

}
bool issubtree(Node*root,Node*subroot){
    if(root==NULL&&subroot==NULL){
        return true;
    }
    else if(root==NULL||subroot==NULL){
        return false;
    }
    if(root->data==subroot->data){
   //identical
   if(identical(root,subroot)){
return true;
        }
        }
    int leftsbtree=issubtree(root->left,subroot);
    if(!leftsbtree){
        return issubtree(root->right,subroot);
    }
       return true;


}


int main(){
vector<int>nodes={1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
Node*root=Buildtree(nodes);
Node*subroot=new Node(2);
subroot->left=new Node(4);
subroot->right=new Node(5);
cout<<issubtree(root,subroot);
return 0;
}