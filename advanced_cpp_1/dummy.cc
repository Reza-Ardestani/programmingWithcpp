/**
* Author Reza Ardestani [ardestani@uleth.ca, ardestani.zm@gmail.com]
* date 2023-06-06
* Note: Sometimes, like when you are implementing a class decleared in header, you need to
*       include the correspoding .hpp file in your .cc file that is an implementation for it.
*/

#include <iostream> 
#include <string>

using namespace std;

void print_name(const string& name){
    
    cout << "\n\nYou called the print_name function to print your name, "
        << name << "!\n" << "What an achievement!\n\n";
}

