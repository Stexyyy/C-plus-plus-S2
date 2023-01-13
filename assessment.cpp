#include <iostream>
#include <ctime>
using namespace std;

int main() {
    int ballin[12];
    double sum = 0;
    srand(time(NULL));
//medium code, It's just to refresh my memory on nested loops...

    for (int i = 0; i < 6; i++) { //outer loop:handles rows

        for (int j = 0; j < 10; j++) { //inner loop: handles columns
            cout << "*"; //inside both loops
        }//end of inner loop

        cout << endl;  //only in outer loop
    }//end outer loop


    for (int i = 0; i < 6; i++) {

        for (int j = 0; j < 10; j++) {
            cout << "1, 2, 3, 4  ";
        }

        cout << endl;


    }

    //spicy code

    for (int i = 0; i <= 12; i++) { //the average
        ballin[i] = rand() % 500 + 1;
        cout << ballin[i] << endl;
    }
    for (int i = 0; i <= 12; i++) {
        //second for loop
        sum += ballin[i];
    }
    sum /= 12;
    cout << "the average is " << sum << endl;
    //add all the slots together

}
