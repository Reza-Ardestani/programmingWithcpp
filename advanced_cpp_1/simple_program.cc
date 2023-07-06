/**
* Author Reza Ardestani [ardestani@uleth.ca, ardestani.zm@gmail.com]
* date 2023-06-06
* Purpose of this code: write a cpp code in the format you were introduced in CSCP1620 
* 
*/
#include <iostream>
#include <string>

using namespace std;

void print_name(const string&);

int main(){

    string n; 
    cout << "Enter your name:" ;
    cin >> n;

    print_name(n);


    return 0;
}


void print_name(const string& name){

    cout << "\n\nYou called the print_name function to print your name, "
        << name << "!\n" << "What an achievement!\n\n";

}