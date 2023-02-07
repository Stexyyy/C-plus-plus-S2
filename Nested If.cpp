#include <iostream>
using namespace std;

int main() {
	//nested if statements
	int choice1, choice2;

	cout << "Type 1 if you like ice cream, 2 if you prefer candy: " << endl;
	cin >> choice1;
	cout << "Ok, now type 1 if you like chocolate more, 2 if you prefer fruit flavores: " << endl;
	cin >> choice2;

	if (choice1 == 1) {
		if (choice2 == 1)
			cout << "You got a hot fudge sunday!" << endl;
		else if (choice2 == 2)
			cout << "you get a strawberry blizzard." << endl;
	}

	else if (choice1 == 2) {
		if (choice2 == 1)
			cout << "Take a hershey bar!" << endl;
		if (choice2 == 2)
			cout << "heres a pack of starbursts!" << endl;
	}

}
