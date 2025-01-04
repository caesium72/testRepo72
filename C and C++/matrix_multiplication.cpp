#include<bits/stdc++.h> 
using namespace std; 
 
int main() 
{ 
    int row1, colum1, row2, colum2; 
    cout << "Enter Row & Column of Matrix 1 : "; 
    cin >> row1 >> colum1; 
    cout << "Enter Row & Column of Matrix 2 : "; 
    cin >> row2 >> colum2; 
 
    int mat1[row1][colum1]; 
    int mat2[row2][colum2]; 
    int mul[row1][colum2]; 
 
    while(colum1 != row2) 
    { 
        cout << endl << "Invalid " << endl;
         
        cout << "Matrix 1 row and col : "; 
        cin >> row1 >> colum1; 
        cout << "Matrix 2 row and col  : "; 
        cin >> row2 >> colum2; 
 
    } 
 
    // User input of 1st matrix 
    cout << "First Matrix " << "[ " << row1 << " X " << colum1 << " ]" << endl; 
    for(int i = 0; i < row1; i++) 
    { 
        for(int j = 0; j < colum1; j++) 
        { 
            cin >> mat1[i][j]; 
        } 
    } 
    // User input of 2nd matrix 
    cout << "Second Matrix " << "[ " << row2 << " X " << colum2 << " ]" << endl; 
    for(int i = 0; i < row2; i++) 
    { 
        for(int j = 0; j < colum2; j++) 
        { 
            cin >> mat2[i][j]; 
        } 
    } 
 
    // Initialize all elements in zero in the resultent matrix 
 
    for(int i = 0; i < row1; i++) 
    { 
        for(int j = 0; j < colum2; j++) 
        { 
            mul[i][j] = 0; 
        } 
    } 

cout << "Matrix 1:" << endl;
for(int i = 0; i < row1; i++) 
{ 
    for(int j = 0; j < colum1; j++) 
    { 
        cout << mat1[i][j] << " "; // Print each element of mat1 without newline
    } 
    cout << endl; // Move to the next row after printing all elements of current row
} 

cout << endl; // Add an empty line between matrices

cout << "Matrix 2:" << endl;
for(int i = 0; i < row2; i++) 
{ 
    for(int j = 0; j < colum2; j++) 
    { 
        cout << mat2[i][j] << " "; // Print each element of mat2 without newline
    } 
    cout << endl; // Move to the next row after printing all elements of current row
}

 
    // Multiplication the two matrix 
    for(int i = 0; i < row1; i++) 
    { 
        for(int j = 0; j < colum2; j++) 
        { 
            for(int k = 0; k < colum1; k++) 
            { 
                mul[i][j] = mul[i][j] + mat1[i][k] * mat2[k][j]; 
            } 
        } 
    } 
    


    cout << endl << "Multiplication  :" << endl; 
    // display the resultant matrix 
    for(int i = 0; i < row1; i++) 
    { 
        for(int j = 0; j < colum2; j++) 
        { 
            cout << mul[i][j] << " "; 
        } 
        cout << endl; 
    } 
    return 0; 
} 
 