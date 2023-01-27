#include <iostream>
using namespace std;

int main() {
	int o = 10;
	int cookies;
	int num1 = 7;

	cout << "ballin" << endl;

	for (int i = 25; i <= 45; i++)
		cout << i << endl << endl;
	for (int n = 90; n >= 70; n--)
		cout << n << endl << endl;
	

	for (int s = 0; s < 3; s++) { //outer loop:handles rows

		for (int j = 0; j < 6; j++) { //inner loop: handles columns
			cout << " 2, 3, 4 "; //inside both loops
		}//end of inner loop

	}


	cout << "how many cookies ya got?" << endl;
	cin >> cookies;
	if (cookies <= 5)
		cout << "you dont got much, want one?" << endl;
	else if (cookies >=5 && cookies <=10)
		cout << "you got a good amount" << endl;
	else if (cookies > 10)
		cout << "you should grab a cookie from me!" << endl;

}

//I can literally do the rest it's just I need to do space invaders so.
