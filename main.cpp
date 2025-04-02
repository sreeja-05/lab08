/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include "matrix_operations.h"

int main() {
    Matrix matrix1, matrix2;
    int N;

    // Load matrices from a file (create and upload your input.txt if needed)
    loadMatrix("input.txt", matrix1, matrix2, N);

    // Print matrices
    cout << "Matrix 1:" << endl;
    printMatrix(matrix1);
    cout << "Matrix 2:" << endl;
    printMatrix(matrix2);

    // Add matrices
    Matrix result = addMatrices(matrix1, matrix2);
    cout << "Matrix Addition Result:" << endl;
    printMatrix(result);

    // Multiply matrices
    result = multiplyMatrices(matrix1, matrix2);
    cout << "Matrix Multiplication Result:" << endl;
    printMatrix(result);

    // Diagonal sum
    int diagonalSum = sumDiagonals(matrix1);
    cout << "Diagonal Sum of Matrix 1: " << diagonalSum << endl;

    return 0;
}
