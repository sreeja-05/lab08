#ifndef MATRIX_OPERATIONS_H
#define MATRIX_OPERATIONS_H

#include <vector>
#include <iostream>
#include <fstream>

using namespace std;

typedef vector<vector<int>> Matrix;

//Function declerations
void loadMatrix(const string& filename, Matrix& matrix1, Matrix& matrix2, int& N);
void printMatrix(const Matrix& matrix);
Matrix addMatrices(const Matrix& matrix1, const Matrix& matrix2);
Matrix multiplyMatrices(const Matrix& matrix1, const Matrix& matrix2);
int sumDiagonals(const Matrix& matrix);
void swapRows(Matrix& matrix, int row1, int row2);
void swapColumns(Matrix& matrix, int col1, int col2);
void updateMatrix(Matrix& matrix, int row, int col, int newValue);

#endif // MATRIX_OPERATIONS_H