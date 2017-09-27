/*
Jusitn Van Nimwegen - 9/21/2017 PERIOD 4
Assigment Name: Display Text
Introdcution to C++ Viual Studoios
Printing out statments to Console from Code
*/

// Libraries
#include <iostream> // cout, cin, end1, <<, >>
#include <conio.h> // pause() fun access to _getch() and kbhit()
// Namespaces
using namespace std;

//Functions
void pause() {
	cout << "press any key to continue . . . ";
	while (!_kbhit());
	_getch();
	cout << '\n';
}
// Main
void main() {
	char H = 'H';
	char e = 'e';
	char l = 'l';
	char o = 'o';
	char W = 'W';
	char r = 'r';
	char d = 'd';
	char noel = '1';
	// Display Test "Hello World"
	cout << "Justin Van NImwegen" << endl;
	cout << "Period 4" << endl;
	cout << H << e << l << l << o << " " << W << o << r << l << d << "!" << endl;
	pause();// Pause() so we can see the text 
	return; // Ends program
}