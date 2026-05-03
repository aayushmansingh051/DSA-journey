#include <iostream>
using namespace std;

int diagonalsum(int mat[][4], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j || j == n - i - 1) { // Corrected condition  
                sum += mat[i][j];
            }
        }
    }
    return sum; // Returning sum instead of printing inside the function
}

int main() {
    int mat[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    cout << "The sum is: " << diagonalsum(mat, 4) << endl; // Print result in main
    return 0;
}









/*
  // for TC=O(N)


   int diagonalsum(int mat[][4], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
         sum += mat[i][i];//pd
            if (i != n - i - 1) { // Corrected condition  
                sum += mat[i][n - i - 1];//sd
            }
        } 
    
    return sum; // Returning sum instead of printing inside the function
    } */