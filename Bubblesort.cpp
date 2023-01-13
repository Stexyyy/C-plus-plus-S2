#include<iostream>
#include<ctime>
using namespace std;



int main() {
	srand(time(NULL));

	int Num[10];

	for (int i = 0; i < 10; i++) {
		int rando = rand() % 100 + 1;
		Num[i] = rando;
		cout << Num[i] << " "; //MAKES the whole array of random numbers and shows it to you
	}

	cout << endl << endl;
	for (int i = 0; i < 10; i++) {//runs the sort 10 times
		for (int i = 0; i < 9; i++) { //runs through 9 slots and bubbles up the highest one
			if (Num[i] > Num[i + 1]) {
				int buffer = Num[i];
				Num[i] = Num[i + 1];
				Num[i + 1] = buffer; //basically just checks if the number to it's right is bigger or not, if the current number is bigger, it basically switches their spots, if not, it leaves them alone
			}
			else
				continue;

		}
	}
	for (int i = 0; i < 10; i++) {
		cout << Num[i] << " ";
	} // showing you the finished array

}
