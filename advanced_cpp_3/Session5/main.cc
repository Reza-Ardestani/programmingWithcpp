#include <iostream>
#include "matrix.hpp"

using namespace std;

int main() {
    int rows, cols;
    cout << "Enter the number of rows for Matrix A: ";
    cin >> rows;
    cout << "Enter the number of columns for Matrix A: ";
    cin >> cols;

    Matrix A(rows, cols);
    A.receive();

    cout << "Matrix A:\n";
    A.print();

    int rows_B, cols_B;
    cout << "Enter the number of rows for Matrix B: ";
    cin >> rows_B;
    cout << "Enter the number of columns for Matrix B: ";
    cin >> cols_B;

    Matrix B(rows_B, cols_B);
    B.receive();

    cout << "Matrix B:\n";
    B.print();

    Matrix * C = A.multiply(B);
    cout << "Result of Matrix Multiplication (C = A * B):\n";
    C->print();
    cout <<  "\n\n";
    
    delete C;

    return 0;
}
