#include <iostream>
using namespace std;

int coffee(char size);

int main() {
	char size;

	cout << "what type of coffee size do you want? 'L', 'M', or 'S' ? " << endl;
	cin >> size;

	coffee(size);


}

int coffee(char size) {
	if (size == 'L') {
		cout << "Large coffee!!!" << endl;
		return 180;
	}
	else if (size == 'M') {
		cout << "Medium coffee!!" << endl;
		return 145;
	}
	else if (size == 'S') {
		cout << "Small coffee!!" << endl;
		return 109;
	}
	else
		cout << "huh???" << endl;

	
}
