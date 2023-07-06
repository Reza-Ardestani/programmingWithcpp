/**
* Author Reza Ardestani [ardestani@uleth.ca, ardestani.zm@gmail.com]
* date 2023-06-06
* Purpose of this code: rewriting the extensive_main code using headers 
* 
*/
#include <iostream>
#include <string>
#include "dummy.hpp"

using namespace std;

int main(){

    string n; 
    cout << "Enter your name:" ;
    cin >> n;

    print_name(n);


    return 0;
}
