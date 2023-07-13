/**
* Author Reza Ardestani [ardestani.zm@gmail.com, www.rezaadventures.com, ardestani@uleth.ca]
* date 2023-06-06
* Purpose of this code: passing data between functions
*  
* 
*/

#include <iostream>

using namespace std;

// void func1(int n){
// 	n = 10;}
// void func2(int& n){
// 	n = 20;}
// void func3(int* n){
// 	*n = 30;}


// int func4(){
// 	int number = 40;
// 	return number;}

// int& func5(){
// 	int n = 50;
// 	return n;}

// int* func6(){
// 	int n = 60;
// 	return &n;}

// int* func7(){
// 	int * ipointer = new int(70);
// 	return ipointer; }

// void func8(string arr[], int size){
// 	cout << "######   inside func8   ######\n";
// 	for(int i =0; i<size; i++){
// 		cout << arr[i] << "," ;
// 	}
// 	cout << "\n\n";}

void informal_greeting(string name){
	cout << "Heeeeeey " << name << ". Welcome back.\n\n";}

void formal_greeting(string name){
	cout << "Hello " << name << ".\n\n";}

void strat_the_program(void (*greeting_func)(string n), string name_of_user ,string today){
	cout << "Starting the program...\n";
	greeting_func(name_of_user);

	cout << "Today is:" << today << "\n\n\n\n";}


int main(){



	// int num1= 1, num2 =2, num3 =3;

	// cout << "Before calling functions: " << num1 << " " << num2 << " " << num3 << endl;
	// func1(num1);
	// func2(num2);
	// func3(&num3);
	// cout << "After calling functions: " << num1 << " " << num2 << " " << num3 << endl;










	// int num4 = func4();
	// int num5 = func5();
	// int* num6 = func6();
	// *num6 = 66; 
	// cout << "After calling functions: num4,5,6 are: " << num4 << " " << num5 << " " << *num6 << endl;










	// int * pointer7 = func7();
	// cout << "By calling function7 we dynamically allocate a memory on heap\n"
	// 	 << "This block of memory is not local and won't get destroyed once we exit the function7\n"
	// 	 << "The value of that block of memory is: " << *pointer7 << "\n\n";

	// // remember that we you are done with that block of memory you have to deallocate it
	// delete pointer7;







	// string name_last_array[2];
	// name_last_array[0] = "firstname"; name_last_array[1]= "lastname";
	// func8(name_last_array, 2);








	//informal_greeting("Rezaaaaaaaa");

	void (*greet1)(string) = &informal_greeting;
	void (*greet2)(string) = &formal_greeting;

	// greet2("any other name");










	strat_the_program(greet2, "Reza", "Friday");









	return 0;
}

/**
 * Read more from these references:
 * https://stackoverflow.com/questions/44631089/c-returning-a-local-pointer-vs-local-variable
 * 
 * 
 *  */