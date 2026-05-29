#include<iostream>
#include<vector>
#include<climits>
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
class Info{
    public:
    int max;
    int min;
    int size;
    bool isBST;
    Info(bool isBST,int max, int min,int size){
        this->isBST=isBST;
        this->min=min;
        this->max=max;
        this->size=size;
    }
};
int maxSize=0;
Info*LargestBST(Node*root){
   if(root==NULL){
    return new Info(true,INT_MIN,INT_MAX,0);
   }
   Info*leftINFO= LargestBST(root->left);
   Info*rightINFO=LargestBST(root->right);

   int currMin=min(root->data,min(leftINFO->min,rightINFO->min));
   int currMax=max(root->data,max(leftINFO->max,rightINFO->max));
   int currSz=leftINFO->size+rightINFO->size+1;
  

   if(leftINFO->isBST && rightINFO->isBST && root->data>leftINFO->max && root->data<rightINFO->min ){
     maxSize=max(maxSize,currSz);
    return new Info(true,currMax,currMin,currSz);
   }
   return new Info(false,currMax,currMin,currSz);
}
int main(){
    Node*root=new Node(50);
    root->left=new Node(30);
    root->left->left=new Node(5);
    root->left->left->right=new Node(20);

    root->right=new Node(60);
    root->right->left=new Node(45);
    root->right->right=new Node(70);
    root->right->right->left=new Node(65);
    root->right->right->right=new Node(80);

    LargestBST(root);
    cout<<"MAX SIZE IS:"<<maxSize;
}