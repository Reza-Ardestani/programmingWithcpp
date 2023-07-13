/**
* Author Reza Ardestani [ardestani.zm@gmail.com, www.rezaadventures.com, ardestani@uleth.ca]
* date 2023-06-06
* Purpose of this code: explore pointers and references in c++
*  
* 
* Note: '*' is both used for initialization of a pointer and dereferencing. Don't get confused
* 		similarly, '&' is both used to initialization of a reference and getting address of a variable.
* Note2: We have a concept of 'Dangling pointer/reference'. check this out yourself.
* Note3: we have "int * ip = new int(5)" and "int *ap = new int[10]" 
* 		 The "new int[10]" find and reserve 10 contiguous memory block for you and return the address of its beginning (or its first block) 
* 		 The ip points to a memory block which stores the number 5
* 		 The ap points to a momory block that stores the first element of an array contains 10 elements
* 		 if you write *p is equal to p[0]. and p[1] is the value of the second element in that array
* Note4: if you write "int *ap = new int[10]"  and try to access ap[12] compiler does not stop you.
* 		 So you, as a porgrammer, have to be careful about getting access to invalid memory addresses. 
* 		
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

    // ############## Part1: Pointing and Refering to primitive data types (int, float, char, bool) ###########
        //// We will see how to point/refer to a variable of type integer. Other types are similar

    // int integer_num = 7; // creating a number
    // int * iptr; // creating a pointer to an int
    // iptr = &integer_num; // saving the address of integer_num to the pointer

    // cout << "integer_num value is : " << integer_num << " the value using the pointer is : " << *iptr <<  endl;

    // int & iref = integer_num; // Creating a reference to an int and initializing it to integer_num
    //                           // Now, iref is an alias for integer_num. It's like another name for integer_num.

    // int &iref2 = *(new int(8)); // Here I create a ref and make it alias to a dynamically allocated integer 

    // ############# Part2: Pointing and Refering to User defined types (struct, union, class, enumeration): #################
        //// we will see how to point/refer to variable of type class (simillar process applies to struct). 
        //// Union & Enum don't need pointer/Reference. It is not common to point/refer to an instance of them.

    // Student st;

    // Student * sptr ;
    // sptr = &st;
    // st.print_info(); // dot operator works on the obeject
    // (*sptr).print_info(); // when you want to use dot operator first you need to dereference your pointer
    // sptr->print_info(); // an alternative to dereferencing is using arrow operator

    // Student & sref = st; // creating a reference to Student object and initializing it to
    // sref.print_info();

    // ############# Part3: Pointing and Refering Derived types (Array, Functions, Pointer, Reference)  ##########
            //// "pointing or refering" to  "Array, Functions, Pointer, Reference" creates 8 different cases 
            //// Some cases does not even exist. We don't have reference to a reference, for example.
            //// We, however, only discuss 2 impoortant case of it: "pointer to pointer" and "pointer to array"

    int num = 7;
    int * pointer = & num;
    int ** pointer_to_a_pointer = & pointer;

    cout << "\n\nThe value that pointer_to_a_pointer is pointing to is: " << *(*pointer_to_a_pointer) << "\n\n";

    int iarr[5] = {0}; //initializing all the elements to 0
    cout << "\nPrinting the elements of array:";
    for(int i = 0; i<5; i++){
        cout << iarr[i] << ","; 
    }


    int * arr_ptr = iarr; // Note that we did not use &iarr to get the address of iarr. (iarr is an address by itself. The address of the first element of array)
    cout << "\nPrinting the elements of array using a pointer:";
    for(int i = 0; i<5; i++){
        cout << arr_ptr[i] << ","; 
    }




	return 0;
}

/**
 * References: 
 * https://www3.ntu.edu.sg/home/ehchua/programming/cpp/cp4_PointerReference.html 
 */