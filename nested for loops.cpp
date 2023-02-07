#include <iostream>
using namespace std;

int main() {
	//nested for loops
    int m;
    int n;


    for (int i = 0; i < 5; i++) { //outer loop:handles rows

        for (int j = 0; j < 10; j++) { //inner loop: handles columns
            cout << "*"; //inside both loops
        }//end of inner loop

        cout << endl;  //only in outer loop
    }//end outer loop

    for (int i = 0; i < 3; i++) {

        for (int j = 0; j < 8; j++) { 
            cout << "*"; 
        }

        cout << endl; 
    }

    cout << "Choose 2 numbers!" << endl << endl;
    cin >> m;
    cin >> n;

    for (int i = 0; i < m; i++) { 

        for (int j = 0; j < n; j++) { 
            cout << "*"; 
        }

        cout << endl; 
    }
}
