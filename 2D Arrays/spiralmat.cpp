//Spiral matrix

#include<iostream>
using namespace std;
void spiralmatrix( int mat[4][4],int n,int m){
    int srow=0,scol=0;
    int erow=n-1,ecol=m-1;
    while (srow <= erow && scol <= ecol) {
    //top
    for(int i=scol;i<=ecol;i++){
        cout<<mat[srow][i]<<" ";
    }
    //right
    for(int j=srow+1;j<=erow;j++){
        cout<<mat[j][ecol]<<" ";
    }
    //bottom
    for(int j=ecol-1;j>=scol;j--){
        if(srow==erow){
            break;
        }
        cout<<mat[erow][j]<<" ";
    }
    //left
    for(int i=erow-1;i>=srow+1;i--){
        cout<<mat[i][scol]<<" ";
        if(scol==ecol){
            break;
        }
    }
    srow++;scol++;
    erow--;ecol--;
}
cout<<endl;
}


int main(){
  int  mat[4][4]={{1,2,3,4},
              {5,6,7,8},
              {9,10,11,12},
              {13,14,15,16}};

     
             spiralmatrix(mat,4,4);
             return 0;
    }
