#include <iostream>
using namespace std;

class Goomba {
private:
	int xpos; 
	int ypos;
	bool isAlive;
public:
	Goomba(); //default constructor
	Goomba(int x, int y); // parameterized contructor
	void walk();
	void info();
};//------------------------------------------

int main() {//--------------------------------------
	Goomba Lary(300, 400); //uses parameterized constructor
	Goomba Bob; // uses regular constructors
	Lary.info();
	Lary.walk();
	Lary.info();
	Bob.info();
}//--------------------------------------

Goomba::Goomba() {
	xpos = 0;
	ypos = 0;
	isAlive = false;
}

Goomba::Goomba(int x, int y) {
	xpos = x;
	ypos = y;
	isAlive = true;
}

void Goomba::walk() { xpos += 1; }

void Goomba::info() {
	cout << "Hi, I'm a goomba and my position is: " << xpos << "," << ypos << endl;
	if (isAlive == true)
		cout << "I am alive fr" << endl;
	else
		cout << "Man im dead" << endl;
}
