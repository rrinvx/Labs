#include<cmath>
#include <iostream>
#include <string>
using namespace std;

int main() {

	int x, y; string z, t, k;

	cout << "Your age: ";
	cin >> x;

	cout << "Your salary: ";
	cin >> y;

	if (x > 20 && 400 < y && y < 1000)

	{
		cout << "<<We will consider your position>";
		cout << "\nYour name: \n";
		cin >> z;
		cout << "Your last name: \n";
		cin >> t;
		cout << "Desired position: \n";
		cin >> k;

	}
	else { cout << "<<<<You are not suitable»»"; }

	return 0;

}