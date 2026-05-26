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
Node*buildtree(vector<int>nodes){
    indx++;
    if(nodes[indx]==-1){
        return NULL;
    }
    Node*currnode=new Node(nodes[indx]);
    currnode->left=buildtree(nodes);
    currnode->right=buildtree(nodes);
    return currnode;
}
int NODES(Node*root){
    if(root==NULL){
        return 0;
    }
    int leftnode=NODES(root->left);
    int rightnode=NODES(root->right);
int countnode=leftnode+rightnode;
return countnode+1;

}
int main(){
        vector<int>nodes={1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Node*root=buildtree(nodes);
    cout<<"the total no.of nodes is: "<<NODES(root);
}