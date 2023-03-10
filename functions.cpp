#include <iostream>
using namespace std;

// Functions with no parameters that return void
void hello();

//-------------------------------------------------

//function that have a non-void return type and parameters.
int add(int x, int y);

int main() {
	//function call
	hello();

	//---------------------------
	//function with parameters
	int answer;

	answer = add(4, 6);

	//---------------------------
}

//----------------------------------------------------

//function hello (no parameters that returns void definition
void hello() {
	cout << "Helloooo" << endl;
}

//-------------------------------------------------

int add(int x, int y) {

	return x + y;

}
