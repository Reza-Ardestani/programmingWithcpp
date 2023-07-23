/**
* Author Reza Ardestani [ardestani.zm@gmail.com, www.rezaadventures.com, ardestani@uleth.ca]
* date 2023-06-16
* 
*/

#include "matrix.hpp"
#include <iostream>

// Constructor
Matrix::Matrix(int rows, int cols) : row(rows), col(cols) {
    allocate_memory();
}

// Destructor
Matrix::~Matrix() {
    deallocate_memory();
}

// Function to allocate memory for the matrix
void Matrix::allocate_memory() {
    mat = new int*[row];
    for (int i = 0; i < row; i++) {
        mat[i] = new int[col];
    }
}

// Function to deallocate memory for the matrix
void Matrix::deallocate_memory() {
    std::cout << "The deallocation of memory function is triggered! The matrix that is being deallocated is as follows:\n";
    this->print();

    for (int i = 0; i < row; i++) {
        delete[] mat[i];
    }
    delete[] mat;
}

// Function to set an entry in the matrix
void Matrix::set_entry(int row, int col, int value) {
    if (row >= 0 && row < this->row && col >= 0 && col < this->col) {
        mat[row][col] = value;
    } else {
        std::cout << "Invalid row or column index.\n";
    }
}

// Function to get an entry from the matrix
int Matrix::get_entry(int row, int col) const {
    if (row >= 0 && row < this->row && col >= 0 && col < this->col) {
        return mat[row][col];
    } else {
        std::cout << "Invalid row or column index.\n";
        return 0; // You may consider returning a special value to indicate an error.
    }
}

// Function to get the number of rows in the matrix
int Matrix::get_rows() const {
    return row;
}

// Function to get the number of columns in the matrix
int Matrix::get_cols() const {
    return col;
}

// Function to print the entire matrix
void Matrix::print() const {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            std::cout << mat[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

// Function to prompt the user to enter values for the matrix
void Matrix::receive() {
    std::cout << "Enter values for the matrix:\n";
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
        	std::cout<<"Mat["<<i<<"]["<<j<<"]: ";
            std::cin >> mat[i][j];
        }
    }
}

// Function to perform matrix multiplication with another matrix
Matrix* Matrix::multiply(const Matrix& B) const {
    int rows_B = B.get_rows();
    int cols_B = B.get_cols();

    if (col != rows_B) {
        std::cout << "Matrix dimensions are not compatible for multiplication.\n";
        exit(0);
    }

    Matrix * result = new Matrix(row, cols_B);

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < cols_B; j++) {
            int sum = 0;
            for (int k = 0; k < col; k++) {
                sum += mat[i][k] * B.get_entry(k, j);
            }
            result->set_entry(i, j, sum);
        }
    }

    return result;
}
