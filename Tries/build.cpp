#include<iostream>
#include<string>
#include<vector>
#include<unordered_map>
using namespace std;
class Node{
    public:
    unordered_map<char,int>children;
    bool endofword=false;
};
class Tries{
    Node*root;
    public:
    Tries(){
    root=new Node();
    }
};