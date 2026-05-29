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
Node*BST(vector<int>arr,int st,int end){
    
    if(st>end){
        return NULL;
    }
    int mid=st+(end-st)/2;
    Node*curr=new Node(arr[mid]);
    curr->left=BST(arr,st,mid-1);
    curr->right=BST(arr,mid+1,end);
    return curr;
}
void getinorder(Node*root,vector<int>&nodes){
    if(root==NULL){
        return ;
    }
    getinorder(root->left,nodes);
    nodes.push_back(root->data);
    getinorder(root->right,nodes);
    
}
void preorder(Node*root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
Node*balancedBST(Node*root){
    vector<int>nodes;
    getinorder(root,nodes);
    return BST(nodes,0,nodes.size()-1);
}
int main(){
    Node*root=new Node(6);
    root->left=new Node(5);
    root->left->left=new Node(4);
    root->left->left->left=new Node(3);

    root->right=new Node(7);
    root->right->right=new Node(8);
    root->right->right->right=new Node(9);
    root=balancedBST(root);
    preorder(root);

}