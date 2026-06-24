#include<iostream>
#include<vector>
using namespace std;
class Heap{
    vector<int>vec;
    public:
void push(int val){
    //step 1
    vec.push_back(val);

    //step 2
    int x=vec.size()-1;// child indx
    int parIdx=(x-1)/2;
while(x>0 && vec[x]<vec[parIdx]){
    swap(vec[x],vec[parIdx]);
    x=parIdx;
    parIdx=(x-1)/2;
}
}
void heapify(int i){
int l=2*i+1;
int r=2*i+2;
int largest=i;
while(true){
    if(l<vec.size() && vec[l]<vec[largest]){
        largest=l;
    }
     if(r<vec.size() && vec[r]<vec[largest]){
        largest=r;
    }
    if(largest==i){
        break;
    }else{
    swap(vec[largest],vec[i]);
     i=largest;
    
}
}
}
void pop(){
    swap(vec[0],vec[vec.size()-1]); //step 1

    vec.pop_back(); // step 2
    heapify(0);
}
bool empty(){
  return vec.empty();
}
int top(){
return vec[0];
}
};
int main(){
    Heap heap;
    heap.push(50);
    heap.push(10);
    heap.push(100);
    while(!heap.empty()){
    cout<<"top: "<<heap.top()<<endl;
       heap.pop(); 
   }
}