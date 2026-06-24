#include<iostream>
#include<vector>
using namespace std;
class Heap{
    vector<int> vec;  //CBT
public:
     void push(int val){
        //step1 insert
vec.push_back(val);
     
       //step2  fix heap
    int x= vec.size()-1; //child index
    int parI=(x-1)/2;  
         //parent Index
        while(x>0 && vec[x]>vec[parI]){
         swap(vec[x],vec[parI]);
         x=parI;
         parI=(x-1)/2;
               }
            }

    void pop(){
        
     }


     int top(){
        return vec[0];

     }
bool empty(){
    return vec.size()==0;
}

};
int main(){
    Heap heap;
    heap.push(50);
    heap.push(10);
    heap.push(100);

    cout<<"top: "<<heap.top()<<endl;
}