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
int height(Node*root){
    if(root==NULL){
        return 0;
    }
    int leftHeight=height(root->left);  
    int rightHeight=height(root->right);

    int maxheight=max(leftHeight,rightHeight);
    return maxheight+1;
}
int Diameter(Node*root){
    if(root==NULL){
        return 0;
    }
    int currdiameter=height(root->left)+height(root->right)+1;
    int leftdiameter=Diameter(root->left);
    int rightdiameter=Diameter(root->right);
    return max(currdiameter,max(leftdiameter,rightdiameter));
}
pair<int, int> Diameter2(Node*root){
    if(root==NULL){
        return make_pair(0,0);
    }
   // (diameter,height)
   pair<int, int> leftinfo=Diameter2(root->left);
   pair<int, int> rightinfo=Diameter2(root->right);
   int currDiam=leftinfo.second+rightinfo.second+1;
   int fianlDiam=max(currDiam,max(leftinfo.first,rightinfo.first));
   int finalHeight=max(leftinfo.second,rightinfo.second)+1;
   return make_pair(fianlDiam,finalHeight);
}
int main(){
    vector<int>nodes={1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Node*root=Buildtree(nodes);
   cout << "Root = " << root->data << endl;
    cout << "Height of tree = " << height(root) << endl;
cout<<"Diameter of tree = "<<Diameter(root)<<endl;
cout<<"Diameter2= "<<Diameter2(root).first<<endl;
    return 0;
}