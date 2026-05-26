#include<iostream>
#include<vector>
#include<map>
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
void topView(Node*root){
    if(root==NULL){
        return;
    }
queue<pair<Node*,int>>q;//(val,HD)
map<int,int>m; //(HD,node->data)

q.push(make_pair(root,0));
while(!q.empty()){
    pair<Node*,int>curr=q.front();
    q.pop();
    
    Node*currNode=curr.first;
    int currHD=curr.second;

    if(m.count(currHD)==0){
        m[currHD]=curr.first->data;//currNode->data
    }
    if(curr.first->left!=NULL){
        q.push(make_pair(curr.first->left,curr.second-1));
    }
     if(curr.first->Right!=NULL){
        q.push(make_pair(curr.first->Right,curr.second+1));

}
   

}
 for(auto it:m){
        cout<<it.second<<",";
    }

}


int main(){
    vector<int>nodes={1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Node*root=buildTree(nodes);

    cout<<"root= "<<root->data<<endl;
    cout<<"topView"<<endl;
    topView(root);
    return 0;
}