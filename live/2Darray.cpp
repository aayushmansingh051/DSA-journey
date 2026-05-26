/*#include<iostream>
using namespace std;
int main(){
int m=3,n=3;
int  arr[n][m]={{1,2,3},
                {4,5,6},
                {7,8,9}};
int t[m][n];
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
t[j][i]=arr[i][j];
    }
}
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        cout<<t[i][j];
    }
    cout<<endl;
}
for(int i=0;i<m;i++){

}
return 0;
}
*/
#include<iostream>
using namespace std;
void transverse(int arr[][3],int n,int m){
    int t[m][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
t[j][i]=arr[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<t[i][j];
        }
        cout<<endl;
    }
}
void reverserowarray(int arr[][3],int m,int n){
    for(int i=0;i<n;i++){
    int s=0;
    int e=m-1;
    while(s<e){
      swap(arr[i][s],arr[i][e]);
      s++,e--;
    }
}
}
    void dispaly(int arr[][3],int m,int n){
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
cout<<arr[i][j]<<",";
            }
        cout<<endl;
    }
}
int main(){
    int arr[3][3]={{1,2,3},
              {4,5,6},
              {7,8,9}};
    int m=3;
    int n=3;
    cout<<"reverse of array";
    transverse(arr,m,n);
     reverserowarray(arr,m,n);
     dispaly(arr,m,n);

}