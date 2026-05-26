
#include<iostream>
using namespace std;
int main(){
    int rows,colms;
    cout<<"enter rows: ";
    cin>>rows;
     cout<<"enter colms: ";
    cin>>colms;

    int* *matrix=new int*[rows];
    for(int i=0;i<rows;i++){
        matrix[i]=new int[colms];
    }
    int x=1;
        for(int i=0;i<rows;i++){
            for(int j=0;j<colms;j++){
                matrix[i][j]=x++;
                cout<<matrix[i][j]<<" ";
            }
            cout<<endl;
        }

}
