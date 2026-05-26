#include<iostream>
#include<vector>
#include<limits>
using namespace std;
class Nodes{
    public:
    int data;
    Nodes*left;
    Nodes*right;
Nodes(int data){
    this->data=data;
    left=right=NULL;
}
};
static int indx=-1;
Nodes*buildtree(vector<int>nodes){
    indx++;
    if(nodes[indx]==-1){
        return NULL;
    }
         Nodes*currnode=new Nodes(nodes[indx]);
       currnode->left= buildtree(nodes);
       currnode->right=buildtree(nodes);
       return currnode;

    }

int height(Nodes*root){
    if(root==NULL){
        return 0;
    }
    int leftheight=height(root->left);
    int rightheight=height(root->right);
    int currheight=max(leftheight,rightheight);
 return currheight+1;
}
int main(){
    vector<int>nodes={1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Nodes*root=buildtree(nodes);
    cout<<"the height is: "<<height(root);
}
