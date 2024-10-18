//Напишіть програму, яка виводить усі прості числа від 1 до N (використовуйте цикл та перевірку на простоту).
#include <iostream>
using namespace std;

void isPrime(int number) {
    int divisorCount = 0;

    for (int i = 1; i <= number; i++) {
        if (number % i == 0) {
            divisorCount++;
        }
    }
    if (divisorCount == 2) {
        cout << number << "-Prostoe" << endl;
    }
    else {
        cout << number << "-NE prostoe" << endl;
    }
}

int main() {
    cout << "Input number: ";
    int number;
    cin >> number;

    for (int i = 1; i <= number; i++) {
        isPrime(i);
    }
}

