#include<iostream> //IT DOESNT WORK!!!! WELL IT WORKS BUT NOT AS WE INTENDED!!!!!!!!!!!!!!!!!!!!!
#include<string.h>
using namespace std;

int person1;
int person2;
void greeting();
string gesture[4] = { "(R)ock", "(P)aper", "(S)cissors", "(N)uke" };
void throws();

int main() {
	greeting();

	cout << "Please enter name 1: " << endl<<endl;
	cin >> person1;

	cout << "Please enter name 2: " << endl<<endl;
	cin >> person2;


	throws();

}

void greeting() {
	cout<<"Welcome to Rock, Paper, Scissors, Nuke! Use capitals for input!"<< endl << endl;
}

void throws() {
	int throw1;
	int throw2;

	cout << person1 << "What would you like to throw? " << gesture << endl<<endl;
	cin >> throw1;
	cout << person2 << "What would you like to throw? " << gesture << endl << endl;
	cin >> throw2;

	if (throw1 == 'R')
		if (throw2 == 'P')
			cout << person2 << "destroys" << person1 << endl << endl;
		else if (throw2 == 'S')
			cout << person1 << "crushes" << person2 << endl << endl;
		else if (throw2 == 'R')
			cout << person1 << "ties with" << person2 << endl << endl;
		else if (throw2 == 'N')
			cout << person1 << "and" << person2 << "are both vaporized by a nuke" << endl << endl;
	else if (throw1 == 'S')
		if (throw2 == 'R')
			cout << person2 << "crushes" << person1 << endl << endl;
		else if (throw2 == 'P')
			cout << person1 << "slaughters" << person2 << endl << endl;
		else if (throw2 == 'S')
			cout << person2 << "ties with" << person1 << endl << endl;
		else if (throw2 == 'N')
			cout << person2 << "and"<< person1 << "are both vaporized by the nuke" << endl << endl;
	else if (throw1 == 'P')
		if (throw2 == 'R')
			cout << person1 << "crushes" << person2 << endl << endl;
		else if (throw2 == 'P')
			cout << person1 << "ties with" << person2 << endl << endl;
		else if (throw2 == 'S')
			cout << person2 << "slaughters" << person1 << endl << endl;
		else if (throw2 == 'N')
			cout << person2 << "and" << person1 << "are both vaporized by the nuke" << endl << endl;
	else if (throw1 == 'N')
			cout << "everyone dies" << endl;
		
}
