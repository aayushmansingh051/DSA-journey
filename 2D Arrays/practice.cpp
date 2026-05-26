/*//Q1 Question1:Print the number of all 7’s
// that are in the 2d array.Example:Input-intarr[][]={{4,7,8},{8,8,7}};n=2,m=3; Output-2

#include<iostream>
using namespace std;
int main(){
    int mat[2][3]={{4,7,8},
                   {8,8,7}};
int n=2,m=3;
int num=0;
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(mat[i][j]==7){
            num++;
        }
    }
}
cout<<"the total no. of 7 is: "<<num;
}*/

/*Q2 Question2:Print out the sum of the numbers in the second row of the “nums” array.
Example:Input-intnums[][]={{1,4,9},{11,4,3},{2,2,3}};Output-18*//*
#include<iostream>
using namespace std;

    int sumofrow(int (*mat)[3],int n,int m){
    int sum=0;
    int i=1;
    //int j;
   for( int j=0;j<m;j++){
    sum+=mat[1][j];
    
        
        }
    

cout<<"sum of the numbers in the second row is: "<<sum;
    }


    int main(){
    int mat[3][3]={{1,4,9},
                   {11,4,3},
                   {2,2,3}};
int n=3,m=3;
sumofrow( mat,3,3);

    }*/
   /* TRANSPOSE*/

    #include <iostream>

using namespace std;

int main() {
    int row = 2, column = 3;
    int matrix[row][column] = {{2, 3, 7}, {5, 6, 7}};
    int transpose[column][row]; // Transposed matrix with flipped dimensions

    // Compute the transpose
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            transpose[j][i] = matrix[i][j]; // Swap indices for transposition
        }
    }

    // Print the transposed matrix
    cout << "Transpose of the matrix:\n";
    for (int i = 0; i < column; i++) {
        for (int j = 0; j < row; j++) {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}