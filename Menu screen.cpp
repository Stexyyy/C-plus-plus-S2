#include <iostream>
#include <string>
using namespace std;

int main() {
	int choice;
	do {
		cout << " 0. Quit" << endl << "1. Play game!";
		cin >> choice;
	}
	while (choice != 0);

	switch (choice) {
		case 0:
			cout << "Okay be like that.";
			break;
		case 1:
			cout << "Major w ig";
			break;
	}

}
