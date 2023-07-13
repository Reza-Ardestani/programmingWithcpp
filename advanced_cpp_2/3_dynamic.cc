/**
* Author Reza Ardestani [ardestani.zm@gmail.com, www.rezaadventures.com, ardestani@uleth.ca]
* date 2023-06-06
* Purpose of this code: 
* 						1) Memory : Stack vs Heap 
* 						2) Fixed vs vaiable arrays variable (for interested students)
* 						3) Dynamic memory allocation using (new or malloc) 
* 						4) Deallocation of dynamically allocated memory (using delete or free)
* 						5) If you don't free up the dynamic allocated momeory then we have: "Memory leak"
* 
* Note: Using new/delete is prefered over malloc/free.
* Note2: Scope is only defined for variables not for the data that is on heap memeory.
* 		 So, when you define a variable it will be destoryed after the program goes
* 		 out of the scope of that variable. Yet, dynamically allocated data stay until you deallocated them explicitly. 
* Note3: Once you terminate your program both stack and heap memory that was allocated for your program will be freed up
* 
*/

#include <iostream>

using namespace std;

class Student {
    // member variables
    private:
    int id = -1; // -1 is defualt id
    double gpa = 4;// initializing with 4
    
    public:
    // member functions
    // print the information for the student
    void print_info() {
        cout << "Student with ID "<< id << " has a GPA = " << gpa << endl;
    }
    // read data from cin
    void set_id_gpa(int i, double g) {
        id = i;
        gpa = g;
    }
};


int main(){

	// Part1: primitive data types (int, float, char, bool) ###########

		//// case 1 (dynamically allocating )

	int * iptr = new int(7);

	cout << "\n\nBy using new int(7) we got one moemory block on the heap and we stored the vlaue: " << *iptr << " in it\n";
	cout << "But we need to deallocated this ourselve when we no longer need it\n" 
		 << "Otherwise this block of moemory stay occupied until you terminate the whole program.\n"
		 << "But remember we have limited, and costly, moemory space. So we need to free it up by <delete> keyword.\n";
	delete iptr;

		// Case2: We lose the address of a memory block and it becomes imposible to free it up later. 
		// the following two lines demonstrate this. We allocate one memory block and store value 8 in that. 
		// But in the new line we allocate a new memory block and store 9 in it and store the address of 9 in iptr2.
		// The address of memory block that contains 8 is 

	int * iptr2 = new int(8);
    delete iptr2;
	iptr2 = new int(9);
	delete iptr2; // only free up the block containing 9 value.


	// 	//// case 3: Dynamically allocating and deallocating other primitive data types (book, float, char) is the same.



	// // Part2: User defined types (struct, union, class, enumeration): ###########

	// 	//// Case1: Almost all the times we don't need to dynamically create enum or union
	// 	//// Case2: Dynamically allocating struct is the same as dynamically allocating a variable of class-type
	// 	//// Case3: Dynamically allocating an object (a.k.a a variable of class-type)

    cout << "\n\n";
    Student * stud = new Student();
    stud->print_info();

    delete stud;


	// // // Part 3: Derived types (Array, Functions, Pointer, Reference) ###########

	// 	//// Note: we don't enter "functions as a datatype" into our discussions
	// 	//// Note2: Rarely do we need to dynamically allocate a reference. It's crazy! But, for interested students, perhaps you, 
	// 	//// 		they can check the website that I have sited at the end of this file.
	// 	//// Note3: Hence, in this part, we will see how to dynamically allocate a pointer and an array (1D and 2D)

	// 	//// Case 1: Dynamically allocating a pointer
	// int **p = new int *;
    // *p = new int(5) ; 
    
    // cout<<"\n\nThe address stored in the first pointer is: " << p
    //     << "\n" << "the address stored in the second pointer is: " << *p 
    //     << "\n" << "the value stored in the memory block that the second pointer is pointing to it is: " << **p 
    //     << endl;
        
    // delete *p; // freeing up the dynamic block containing value 5
    // delete p; // freeing up the dynamic block contaning the second pointer
    // // note: you don't need to free up the first pointer. It is not dynamic. It is on the stack.

    // 	//// Case 2: Dynamically allocating a 1D array
    // cout << "\n\nDynamically allocating a 1D array.\n";
    // int num_elements = 3;
    // int * oneDarray = new int[num_elements];
    // // assigning value
    // int value=20;
 
    // for(int j=0; j<num_elements;j++)
    // {
    //     oneDarray[j] = value++;
    // }

    // // printing the values
    // cout <<"\nPrinting the values of the 1D array:\n";
    // for(int j=0; j<num_elements;j++)
    // {
    //    cout << oneDarray[j] << ",";
    // }
    // cout << endl;

    // // Memory deallocation
    // delete [] oneDarray;
   




    // 	//// Case 2: Dynamically allocating a 2D array
    // cout << "\n\nDynamically allocating a 2D array.\n";
    // int row_size = 5;
    // int column_size = 7;


    // // Declaration
    // int **a;

    // // memory allocation
    // a  = new int *[row_size];
    // for(int i = 0; i<row_size ; i++)
    // {
    //     a[i] = new int[column_size];
    // }

    // // assigning value
    // value=1;
    // for(int i=0;i< row_size ; i++)
    // {
    //     for(int j=0; j<column_size;j++)
    //     {
    //         a[i][j] = value++;
    //     }
    // }
    
    // // print value
    // for(int i=0;i< row_size ; i++)
    // {
    //     for(int j=0; j<column_size;j++)
    //     {
    //         cout<<a[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }


    // // memory deallocation
    // for(int i = 0; i < row_size; i++) 
    // {
    //     delete [] a[i];
    // }
    // delete [] a;


	return 0;
}

/**
* References: 
* https://gribblelab.org/teaching/CBootCamp/7_Memory_Stack_vs_Heap.html
* https://stackoverflow.com/questions/40300794/c-scope-of-a-dynamically-allocated-variable
* https://stackoverflow.com/questions/31199566/whats-the-difference-between-a-vla-and-dynamic-memory-allocation-via-malloc
* 
* Dynamically allocate a reference:
* https://stackoverflow.com/questions/10023632/c-reference-to-dynamic-memory
* 
*/