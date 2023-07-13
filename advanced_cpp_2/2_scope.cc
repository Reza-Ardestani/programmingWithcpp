/**
* Author Reza Ardestani [ardestani.zm@gmail.com, www.rezaadventures.com, ardestani@uleth.ca]
* date 2023-06-06
* Purpose of this code: scope of variables
*  
* 
*/

#include <iostream>
#include "myheader.hpp"

using namespace std;

void my_funtion(int&);

int visible_everywhere = 100;

int main(){

    int main_num = 1;
    int second_main_num = 0;

    // //block scope
    // if (true){
    //     cout << "inside if statement ...\n";
    //     int block_number = 5;
    //     cout << "value of block_number is: " << block_number << endl;
    // }
    // cout <<"Outside the branch\n";
    // //cout << "block_number is: " << block_number;

    // for(int i = 0; i< 5 ; i++ ){
    //     cout << i <<",";
    // }
    // cout <<"\nOutside the for loop\n";

    // cout << "i is: " << i << "\n\n";

    //cout << "the value of my_funtion_num is : " << my_funtion_num;


    my_funtion(main_num);
    // cout << "\n\n the value of main_num variable after calling my_funtion: "
    //      << main_num << "\n\n";


    cout <<"Inside the main function the value of visible_everywhere is:" <<visible_everywhere << endl <<endl; 


	return 0;
}

void my_funtion(int& n){
    int my_funtion_num = 20;
    cout <<"Inside the user defined function the value of visible_everywhere is: " <<visible_everywhere << endl << endl; 
    // cout << "Inside userdefined function\n"
    //      << "the value of received number is: "
    //      << n  <<endl;
    // changing the variable's value that we got from main:
    n = 5;

}






/**
 * https://www.youtube.com/watch?v=etQX4Mme2f4
 * https://www.youtube.com/watch?v=H5nsqGPRkmU
 * https://www.youtube.com/watch?v=kecbsrH3m2s&list=PLBlnK6fEyqRh6isJ01MBnbNpV3ZsktSyS&index=27
 * https://www.youtube.com/watch?v=H5nsqGPRkmU&list=PLBlnK6fEyqRh6isJ01MBnbNpV3ZsktSyS&index=26 
*/