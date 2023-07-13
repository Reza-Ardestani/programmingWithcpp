/**
* Author Reza Ardestani [ardestani.zm@gmail.com, www.rezaadventures.com, ardestani@uleth.ca]
* date 2023-06-06
* Purpose of this code: experimenting with different data types in cpp.
* 
*/

#include <iostream>
#include <string> // for straing data-type

using namespace std;

union Height{
    int cm; 
    float feet;
}hg;

enum Weekdays {
            Monday,
            Tuesday,
            Wednesday,
            Thursday,
            Friday,
            Saturday,
            Sunday,}today;

struct Person {
    string name = "NG"; // defualt values is NotGiven 
    int id = 0; // initializing with 0
}p1,p2;

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
}st1;


int main(){

    // ############## Part1: primitive data types (int, float, char, bool) ###########
    // int inum = 0;
    // double dnum = 1.00;
    // char ch = 'f'; 
    // bool binary = false;

    // cout << binary << endl;


    // // ############# Part2: User defined types (struct, union, class, enumeration): #################
    //     //// Case1: Union
    //     cout << "\nHg variable has three attributes: (cm, feet, category)\n";
    //     hg.cm = 180;
    //     cout << "we set hg.cm to 180. \"hg.cm\" is: " << hg.cm << "\n" ;
    //     cout << "But later we decide to store height in feet by setting hg.feet = 5.9\n";
    //     hg.feet = 5.9;
    //     cout << "The value of hg.feet is: " << hg.feet  << "\n\n";

    //     //// Case2: Enum

    //     today = Friday;
    //     cout << "\nToday is the : " << today << "\'th day of the week" 
    //     << "\tnext day is the " << today +1 << "\'th of the week\n\n";

    //     //// Case3: Struct 

    //     p1.name = "Person1"; p1.id = 1;
    //     cout << "The first Person Structure name is \"" << p1.name << "\" with id:" << p1.id<< "\n";
    //     p2.name = "Person2"; p2.id = 2;
    //     cout << "The second Person Structure name is \"" << p2.name << "\" with id:" << p2.id << "\n\n";

    //     //// Case4: Class

    //     string name = "Reza"; 
    //     // name is a variable with a type string class
    //     // in other words, name is an object of the string class
    //     cout << "An object from class string is generated which has a value= " << name <<"\n\n";

    //     st1.set_id_gpa(1, 4);
    //     st1.print_info();

    //     Student st2; //declaring(creating) a student object named st2
    //     // Note that the st2 that is defined here is local variable but 
    //     // st1 that was defined before main is a gloabal variable.
    //     st2.set_id_gpa(2,3.5);
    //     st2.print_info();
    //     cout << "\n\n";


    // // ############# Part3: Derived types (Array, Functions, Pointer, Reference)  ##########
    // // We won't cover function as a data-type (it's not useful and also the syntax is stupid in cpp)

        //// Case1: Arrays
    
    int iarr[5]; // note: specifiying the size, 5, isn't necess here.
    // int twoDim_iarr[][] = {{1,2}, {3,4}};// This raise an erro, why?

    // initialization of the array:
    for(int i=0; i<5 ; i++){
        iarr[i]= i;
    }
    cout << "printing the values sotred in the 1D array\n";
    for(int i=0; i<5 ; i++ ){
        cout << iarr[i] <<",";
    }
    cout << "\n\n";

    int twoDim_iarr[][2] = {{1,2}, 
                            {3,4}}; // [row][column]
                            
    int threeDim_iarr[][2][3] = {{{1,2,3},{2,3,4}}, 
                                 {{3,4,5},{4,5,6}}};

        //// Case 2: Pointers
    int integer_num = 7;
    int * iptr; 
    iptr = &integer_num;

    cout << "the value of integer_num is: " << integer_num
         << " the address of integer_num is " << &integer_num
         << "\nthe value of iptr pointer is " << iptr 
         << " the value that iptr pointer is pointing to is: " << *iptr 
         << "\n the address of the iptr pointer is: " << &iptr << "\n\n";

        //// Case 3: References

    int & iref = integer_num;
        cout << "the value of integer_num is: " << integer_num
         << " the address of integer_num is " << &integer_num
         << "\nthe value of iref reference is " << iref 
         << " the value that iref reference is refering to is: " << iref <<"\n"
         << "the address of iref is: " << &iref << "\n\n";



    return 0;
}

/**
* References:
* https://stackoverflow.com/questions/2310483/purpose-of-unions-in-c-and-c
* https://stackoverflow.com/questions/1179937/how-does-a-c-reference-look-memory-wise
*
*/