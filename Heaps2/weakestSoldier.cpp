#include<iostream>
#include<vector>
#include<queue>
using namespace std;
class Row{
    public:
    int indx;
    int count;
    Row(int indx,int count){
        this->indx=indx;
        this->count=count;
    }
    bool operator < (const Row &obj)const{
        if(this->count==obj.count){
            return this->indx > obj.indx;
        }
       return this->count < obj.count;
    }

};
void weakestSoldier(vector<vector<int>> matrix,int k){
    vector<Row>rows;
    for(int i=0;i<matrix.size();i++){
        int count=0;
        for(int j=0;j<matrix[i].size();j++){
            if(matrix[i][j]==0){
                count++;
            }
            
        }
        rows.push_back(Row(i, count));
    }
    priority_queue<Row>pq(rows.begin(),rows.end());
    for(int i=0;i<k;i++){
        cout<<"Rows"<<pq.top().indx<<endl;
        pq.pop();
    }
    
}
int main(){
    vector<vector<int>>matrix={{1,0,0,0},
                               {1,1,1,1},
                               {1,0,0,0},
                               {1,0,0,0}};

    
    weakestSoldier(matrix,2);
                    
}