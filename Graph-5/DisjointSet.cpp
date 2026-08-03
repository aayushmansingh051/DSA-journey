#include<iostream>
#include<vector>
#include<list>
using namespace std;
class Disjoint{
    public:
    int n;
    vector<int>par;
    vector<int>rank;

Disjoint(int n){
    this->n=n;
    for(int i=0;i<n;i++){
    par.push_back(i);
    rank.push_back(0);

    }
}
int find(int x){
    if(par[x]==x){
        return x;
    }
    return par[x]=find(par[x]);  // pathcompression
}
void unionByRank(int a ,int b){
    int parA=find(a);
    int parB=find(b);
    if(parA == parB) return; 
    if(rank[parA]==rank[parB]){
        par[parB]=parA; 
    }
    else if(rank[parA]>rank[parB]){
        par[parB]=parA;
    }
    else{
        par[parA]=parB;
    }

}

};
int main() {
    // Example: 5 elements (0 to 4)
    Disjoint dsu(5);

    // Union some sets
    dsu.unionByRank(0, 1);
    dsu.unionByRank(2, 3);
    dsu.unionByRank(1, 2); // connects 0,1,2,3 together

    // Check representatives
    cout << "Find(0): " << dsu.find(0) << endl;
    cout << "Find(1): " << dsu.find(1) << endl;
    cout << "Find(2): " << dsu.find(2) << endl;
    cout << "Find(3): " << dsu.find(3) << endl;
    cout << "Find(4): " << dsu.find(4) << endl;

    return 0;
}