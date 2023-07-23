//Matrix-Matrix Multiplication Code
//Author: Wali
// Modified and debugged by Reza [ardestani.zm@gmail.com, www.rezaadventures.com, ardestani@uleth.ca] on July 18th, 2023

// Header file for standard input output
#include <iostream>
#include <cstdlib>
using namespace std;

//Pre-Condition: 2D Matrix, row and column size. The matrix must allocate memory.
//Post-Condition: The empty 2D Matrix Mat will contain user input data 
//Description: Input FUnction
void MatrixInput(int **Mat, int row, int col);

//Pre-Condition: 2D Matrix, row and column size. The matrix must allocate memory.
//Post-Condition: Will print the assigned value inside 2D matrix Mat
//Description: Output function
void MatrixOutput(int **Mat, int row, int col);

//Pre-Condition: Two 2-D matrices A, B are given with their size. Cannot be empty.
//Post-Condition: Will show matrix-matrix multiplication result
//Description: Multiplication function
void MM_Multiplication(int **A, int rowA, int colA, int **B, int rowB, int colB);




int main( )
{
    int **A, **B;

    int rowA,colA,rowB,colB;

    cout<<"Matrix A::"<<endl;
    cout<<"Number of rows: ";
    cin>>rowA;
    cout<<"Number of columns: ";
    cin>>colA;


    // MEMORY ALLOCATION: Matrix A
    // Allocating memory (rows)
    A = new int*[rowA];
    // Allocating memory (columns of each row)
    for(int i = 0; i < rowA; i++)
        A[i] = new int[colA];

    // Call input function for Matrix A
    MatrixInput(A,rowA,colA);

    cout<<"Matrix B::"<<endl;
    cout<<"Number of rows: ";
    cin>>rowB;
    cout<<"Number of columns: ";
    cin>>colB;

    // MEMORY ALLOCATION: Matrix B
    // Allocating memory (rows)
    B = new int*[rowB];
    // Allocating memory (columns of each row)
    for(int i = 0; i < rowB; i++)
        B[i] = new int[colB];

    // Call input function for Matrix B
    MatrixInput(B,rowB,colB);


    MatrixOutput(A,rowA,colA);
    MatrixOutput(B,rowB,colB);


    MM_Multiplication(A,rowA,colA,B,rowB,colB);


    // Memory Deallocation
    // Matrix A
    for(int i = 0; i < rowA; i++)
        delete [] A[i];
    delete []A;

    // Matrix B
    for(int i = 0; i < rowB; i++)
        delete [] B[i];
    delete []B;

    return 0;
}

void MatrixInput(int **Mat, int row, int col)
{


    cout<<"Enter values: "<<endl;
	for(int i=0 ; i<row ; i++)
	{
		for(int j=0 ; j<col ; j++)
        {
            cout<<"Mat["<<i<<"]["<<j<<"]: ";
			cin>>Mat[i][j];
        }
	}
}

void MatrixOutput(int **Mat, int row, int col)
{
    cout<<"Matrix: "<<endl;
	for(int i=0 ; i<row ; i++)
	{
		for(int j=0 ; j<col ; j++)
        {
            cout<<Mat[i][j]<<" ";
        }
        cout<<endl;
	}
}

void MM_Multiplication(int **A, int rowA, int colA, int **B, int rowB, int colB)
{

    // Criteria checking
    if(colA!=rowB){
        cout<<"Number of columns of Matrix A must match with number of rows of Matrix B"<<endl;
        exit(0);
    }

    // Result Matrix of size rowA, colB
    int **C;

    // MEMORY ALLOCATION: Matrix C
    // Allocating memory (rows)
    C = new int*[rowA];
    // Allocating memory (columns of each row)
    for(int i = 0; i < rowA; i++)
        C[i] = new int[colB];
    
    //Initialize Matrix C
    for(int i = 0; i < rowA; i++)
    {
        for(int j = 0; j < colB; j++)
        {
            C[i][j]=0;
        }
    }

    // Matrix-Matrix-Multiplication
    for(int i = 0; i < rowA; i++)
    {
        for(int j = 0; j < colB; j++)
        {
            for(int k = 0; k < colA; k++)
            {
                C[i][j]=C[i][j] + A[i][k] * B[k][j];    
            }
        }
    }

    MatrixOutput(C,rowA,colB);



    // Memory Deallocation
    // Matrix C
    for(int i = 0; i < rowA; i++)
        delete [] C[i];
    delete []C;   
}
