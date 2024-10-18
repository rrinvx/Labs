#include<cmath>
#include <iostream>
using namespace std;

int main() {

	int x, a, b;
	cout << "Input integer x: ";
	cin >> x;
	cout << "The remainder when dividing by 7: " << x % 7 << endl;
	cout << "Input integer a: ";
	cin >> a;
	cout << "Input integer b: ";
	cin >> b;

	if (a % b == 0) cout << "Numbers a and b divided without remainder " << endl;

	if (a % b == 1) cout << "Numbers a and b divided with remainder " << endl;

	if (a % 2 == 0) cout << "The number " << a << " is even" << endl;

	if (a % 2 == 1) cout << "The number " << a << " isn't even" << endl;

	if (b % 2 == 0) cout << "The number " << b << " is even" << endl;

	if (b % 2 == 1) cout << "The number " << b << " isn't even" << endl;

	return 0;
}