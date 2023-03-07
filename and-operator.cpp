#include<iostream>
using namespace std;

//practice using the & operator
//& means address of in c++ it returns the address of a given variable

void fun1(int a, int& b, char v);
void fun2(int& x, int y, char& w);
void fun3(int f, int& p, char& l);

int main() {
	int num1, num2, num3;
	char ch;

	num1 = 10;
	num2 = 15;
	num3 = 20;
	ch = 'A';

	cout << num1 << " " << num2 << " " << ch << endl;

	fun1(num1, num2, ch);

	cout << num1 << " " << num2 << " " << ch << endl;

	fun2(num2, 25, ch);

	cout << num1 << " " << num2 << " " << ch << endl;

	fun3(num3, num2, ch);

	cout << num1 << " " << num2 << " " << ch << endl;


}

void fun1(int a, int& b, char v) {
	int one;
	one = a;
	a++;
	b = b * 2;
	v = 'B';
	cout << "inside fun1: ";
	cout << a << " " << b << " " << v << endl;
}

void fun2(int& x, int y, char& w) {
	x++;
	y = y * 2;
	w = 'G';

	cout << "Inside fun2: ";
	cout << x << " " << y << " " << w << endl;
}

void fun3(int f, int& p, char& l) {
	f++;
	p = p * 2;
	l = 'H';

	cout << "Inside fun3: ";
	cout << f << " " << p << " " << l << endl;

}
