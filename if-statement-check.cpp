#include <iostream>
using namespace std;

int main() {

	int turtles;
	int num1 = 7;
	cout << "how many turtles do you have?" << endl;
	cin >> turtles;

	if (turtles < 7)
		cout << "you dont got enough turtles (L)" << endl;
	else if (turtles == 7)
		cout << "you have the perfect amount of turtles!" << endl;
	else if (turtles > 7)
		cout << "give me some of your turtles. right neow." << endl;

	if (turtles % num1==0)
		cout << endl << turtles << " is divisible by " << num1 << " You also have a lucky amount of turtles! ";
	else
		cout << "you suck loser" << endl;


}
