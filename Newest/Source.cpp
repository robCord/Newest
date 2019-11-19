#include <iostream>

using namespace std;

void main()
{
	cout << "\n\n\t***Using pointer variables***\n";
	//this is an integer variable
	int age = 21;
	//this is a reference
	int& rage = age;
	//what is the memory address of age
	//use the address of operator to find out.
	cout << "The address of age is " << &age << endl;
	int* page = &age;
	//declare a pointer to age
	cout << "\nThe value of pointer page is " << page << endl;
	//show an address
	cout << "\nBy using a pointer only we can see the value being held in variable age at address location of " << page << " is " << *page << endl;
	cout << "\nThe age variable says you are " << age << endl;
	
}