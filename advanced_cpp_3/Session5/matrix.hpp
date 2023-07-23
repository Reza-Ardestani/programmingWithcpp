/**
* Author Reza Ardestani [ardestani.zm@gmail.com, www.rezaadventures.com, ardestani@uleth.ca]
* date 2023-06-16
* 
*/

#ifndef MATRIX_H
#define MATRIX_H

class Matrix {
public:
    // Constructor
    Matrix(int rows, int cols);

    // Destructor
    ~Matrix();

    // Function to set an entry in the matrix
    void set_entry(int row, int col, int value);

    // Function to get an entry from the matrix
    int get_entry(int row, int col) const;

    // Function to get the number of rows in the matrix
    int get_rows() const;

    // Function to get the number of columns in the matrix
    int get_cols() const;

    // Function to print the entire matrix
    void print() const;

    // Function to prompt the user to enter values for the matrix
    void receive();

    // Function to perform matrix multiplication with another matrix
    Matrix* multiply(const Matrix& B) const;

private:
    int row;
    int col;
    int** mat;

    // Helper function to allocate memory for the matrix
    void allocate_memory();

    // Helper function to deallocate memory for the matrix
    // This function also prints some info about the matrix that is being deallocated
    void deallocate_memory();
};

#endif // MATRIX_H
