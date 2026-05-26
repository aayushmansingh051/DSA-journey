#include<iostream>
using namespace std;
#include<vector>
#include<queue>
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
    Node*currnode=new Node(nodes[indx]);
    currnode->left=Buildtree(nodes);
    currnode->right=Buildtree(nodes);
    return currnode;
}
void levelorder(Node*root){
    if(root==NULL){
        return;
    }
    queue<Node*>q;
    q.push(root);
     while(!q.empty()) {                  // 4️⃣ Loop until queue is empty
        Node* curr = q.front();          // 5️⃣ Get the front node
        q.pop();                         // 6️⃣ Remove it from queue

        cout << curr->data << " ";       // 7️⃣ Print the node’s value
        
        if(curr->left) q.push(curr->left);   // 8️⃣ Add left child if exists
        if(curr->right) q.push(curr->right); // 9️⃣ Add right child if exists
    }

}
int main(){
    vector<int>nodes={1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Node*root=Buildtree(nodes);
    levelorder(root);
}