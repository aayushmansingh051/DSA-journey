#include<iostream>
#include<vector>
#include<queue>
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
void levelorder(Node*root){
    if(root==NULL){
        return;
    }
    queue<Node*>q;
    q.push(root);
    q.push(NULL);
   
   while(!q.empty()){
    Node*curr=q.front();
   q.pop();
   if(curr==NULL){
     
    if(q.empty()){
        break;
    }
    q.push(NULL);
    cout<<endl;
   
   }else{
       cout<<curr->data;
   if(curr->left!=NULL){
    q.push(curr->left);

   }
   if(curr->Right!=NULL){
    q.push(curr->Right);
   }
   }

}

//cout<<endl;

}
int main(){
    vector<int>nodes={1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Node*root=buildTree(nodes);
    levelorder(root);
}