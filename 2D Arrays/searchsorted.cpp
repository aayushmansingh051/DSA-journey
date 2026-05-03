/*Brute force TC= O(n*m)*/ /*

#include<iostream>
using namespace std;
int main(){
    int arr[4][4]={{10,20,30,40},
                   {15,25,35,45},
                   {27,29,37,48},
                   {32,33,39,50}};
int n=4,m=4;
    int target=33;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(arr[i][j]==target){
                cout<<"the index is"<<i<<","<<j<<endl;
            }

        }
    }
    }
    */

/*important Stair Case TC =*/ 
#include<iostream>
using namespace std;
int search(int mat[][4],int n,int m,int key){
    int i=0,j=m-1;
    while(i<n&&j>=0){
            if(mat[i][j]==key){
                cout<<"found at cell: "<<i<<","<<j;
                return true;
            }
            else if(mat[i][j]<key){
                i++;
            }
            else if(mat[i][j]>key){
                j--;
            }
            }
        
        cout<<"key not found\n";
        return false;
    }


int main(){
    int mat[4][4]={{10,20,30,40},
                   {15,25,35,45},
                   {27,29,37,48},
                   {32,33,39,50}};
int n=4,m=4;
int key=33;
search(mat,n,m,key);

}