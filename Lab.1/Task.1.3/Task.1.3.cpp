﻿#include<cmath>
#include <iostream> 
using namespace std;
int main() {
	setlocale(0, ".1251");
	int x;
	cout << "Введіть знячення х: ";
	cin >> x;

	cout << "\nПостфіксна інкрементація: " << x++ << endl;

	cout << "Значення х після постфіксної інкрементації: "<< x<< endl;

	cout << "\nПрефіксна інкрементація: " << ++x << endl;

	cout << "Значення х після префіксної інкрементації: " << x << endl;

	cout << "\nПостфіксна декрементація: " << x-- << endl;

	cout << "Значення х після постфіксної декрементації: " << x << endl;

	cout << "\nПрефіксна декрементація: " << --x << endl;

	cout << "Значення х після постфіксної декрементації: " << x << endl; 
	return 0;

}