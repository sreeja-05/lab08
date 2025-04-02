#include "matrix_operations.h"

//Function to load matrices from a file
void loadMatrix(const string& filename, Matrix& matrix1, Matrix& matrix2, int& ){
    ifstream file(filename);
    if (file.is_open()){
        file >> N; //Read size of matrix
        matrix1.resize(N, vector<int>(N));
        matrix2.resize(N, vector<int>(N));
        
        //Load first matrix
        for (int i = 0; i < N; i++){
            for (int j = 0; j < N; j++){
                file >> matrix1[i][j];
            }
        }
        
        //Load second matrix
        for (int i = 0; i < N; i++){
            for (int j = 0; j< N; j++){
                file >> matrix2[i][j];
            }
        }
        
        file.close();
    } else {
        cerr << "Error opening file!" << end1;
    }
}

//Function to print a matrix
void printMatrix(const Matrix& matrix){
    for(const auto& row: matrix){
        for (int val : row){
            count << val << " ";
        }
        count << end1;
    }
}

//Function to add two matrices
Matrix addMatrices(const Matrix& matrix1, const Matrix& matrix2){
    int N = matrix1.size();
    Matrix result(N, vector<int>(N));
    
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    return result;
}


// Function to multiply two matrices
Matrix multiplyMatrices(const Matrix& matrix1, const Matrix& matrix2) {
    int N = matrix1.size();
    Matrix result(N, vector<int>(N, 0));

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            for (int k = 0; k < N; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
    return result;
}

// Function to calculate the sum of diagonal elements
int sumDiagonals(const Matrix& matrix) {
    int N = matrix.size();
    int sum = 0;

    // Sum of main diagonal
    for (int i = 0; i < N; i++) {
        sum += matrix[i][i];
    }
    
    // Sum of secondary diagonal
    for (int i = 0; i < N; i++) {
        sum += matrix[i][N-i-1];
    }

    return sum;
}


// Function to swap rows in a matrix
void swapRows(Matrix& matrix, int row1, int row2) {
    if (row1 < matrix.size() && row2 < matrix.size()) {
        swap(matrix[row1], matrix[row2]);
    } else {
        cerr << "Invalid row indices!" << endl;
    }
}

// Function to swap columns in a matrix
void swapColumns(Matrix& matrix, int col1, int col2) {
    if (col1 < matrix.size() && col2 < matrix.size()) {
        for (int i = 0; i < matrix.size(); i++) {
            swap(matrix[i][col1], matrix[i][col2]);
        }
    } else {
        cerr << "Invalid column indices!" << endl;
    }
}

// Function to update an element in a matrix
void updateMatrix(Matrix& matrix, int row, int col, int newValue) {
    if (row < matrix.size() && col < matrix.size()) {
        matrix[row][col] = newValue;
    } else {
        cerr << "Invalid row or column index!" << endl;
    }
}



