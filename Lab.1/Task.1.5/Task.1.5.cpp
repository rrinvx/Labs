#include <iostream>
#include<cmath>
using namespace std;
int main() {

	int x;
	cout << "Введіть свою оцінку:";
	cin >> x;
	if (x < 25) { cout << "Незадовільно"; }
	if (x > 25 && x < 51) { cout << "Задовільно"; }
	if (x > 51 && x < 76) { cout << "Добре"; }
	if (x > 76 && x <= 100) { cout << "Відмінно"; }
	
	return 0;
}