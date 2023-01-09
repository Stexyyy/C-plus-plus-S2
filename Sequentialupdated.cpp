#include <iostream>
using namespace std;

int main() {
	int location; // to keep track of which slot in the array we're looking at
	bool found = false; // have we found it?
	int IDs[] = { 234, 567, 321, 567, 234, 789 }; // a dummy array for testing
	location = sizeof(IDs) / sizeof(IDs[5]); // start in the END
	int tracking = 0;
	//add variable to keep track of how many
	int searchItem;
	cout << "enter ID you're searching for" << endl;
	cin >> searchItem;

	while (location >= 0 ) { //keep going as long as we haven't reached the end AND we have't found it.
		if (IDs[location] == searchItem) { //check if what we're looking for is in that slot
			found = true;
			tracking++;
			location--;
			//add to the variable that's keeping track of how many
		}
		else
			location--;

	}

	if (found == true) {
		cout << "Id " << searchItem << " was found in slot " << location << "." << endl << endl;
		cout << " ID " << searchItem << " was found about " << tracking << "times." << endl;
	}
	else
		cout << "ID was not found." << endl;

}
