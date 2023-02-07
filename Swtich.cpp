#include <iostream>
using namespace std;

int main() {
	//switch statement
	char choice;
	cout << "what do you prefer? (t)erarria, (o)verwatch, (m)inecraft, or (h)ades?" << endl;
	cin >> choice; 
	switch (choice) {
	case 't':
		cout << "The eye of cthulu has awoken!" << endl;
		break;
	case 'o':
		cout << "Let the kitsune guide you!" << endl;
		break;
	case 'm':
		cout << "brrrrrrrrrrrrrrrrrrr" << endl;
		break;
	case 'h':
		cout << "*something sounding kind of british tbh*" << endl;
	}


}
