#include <iostream>
using namespace std;

int main() {
	int location; // to keep track of which slot in the array we're looking at
	bool found = false; // have we found it?
	location = 0; // start in the first slot
	int IDs[] = { 234, 567, 321, 567, 234, 789 }; // a dummy array for testing

	int searchItem;
	cout << "enter ID you're searching for" << endl;
	cin >> searchItem;

	while (location < sizeof(IDs) && !found) { //keep going as long as we haven't reached the end AND we have't found it.
		if (IDs[location] == searchItem) //check if what we're looking for is in that slot
			found = true;
		else
			location++;

	}

	if (found == true) {
		cout << "Id " << searchItem << " was found in slot " << location << "." << endl << endl;
	}
	else
		cout << "ID was not found." << endl;

}
