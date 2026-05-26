#include<iostream>
#include<vector>
#include<queue>
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
int static indx=-1;
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
void kthhelper(Node*root, int k,int currlevel){
if(root==NULL){
    return;
}
if(k==currlevel){
    cout<<root->data<<",";
}
kthhelper(root->left,k,currlevel+1);
kthhelper(root->right,k,currlevel+1);
}
void Kthlevel(Node*root,int k){
kthhelper(root,k,1);
cout<<endl;

}
//without recurrsion
/*void Kthlevel(Node*root,int k){
    if(root==NULL){
        return ;
    }
queue<Node*>q;
q.push(root);
int currlevel=1;
while(!q.empty()){
    int size=q.size();
for(int i=0;i<size;i++){
    Node*curr=q.front();
    q.pop();

    if(k==currlevel){
cout<<curr->data<<" ";
    }
    
if(curr->left!=NULL){
    q.push(curr->left);
}
if(curr->right!=NULL){
    q.push(curr->right);
}
}
currlevel++;
}
}
*/
int main(){
     vector<int>nodes={1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Node*root=Buildtree(nodes);

    cout<<"kth level is: ";
      Kthlevel(root,3);
}

