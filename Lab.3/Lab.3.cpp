#include <iostream>
#include <cmath> 
#include <string>
using namespace std;

// 1
int sum(int a, int b) {
    return a + b;
}

double sum(double a, double b) {
    return a + b;
}

string sum(string a, string b) {
    return a + b;
}
//2
int min(int a, int b) {
    if (a < b) {
        return a;
    } 
    else {
        return b;
    }
   
int min(const int &a, const int &b) {
    if (a < b) {
        return a;
    }
    else {
        return b;
    }

//3
double area(double side) {
    return side * side;
}

double area(double width, double height) {
    return width * height;
}

double area(double radius, bool isCircle) {
    const float pi = 3.1416;
    return pi * radius * radius;
}


double area(double a, double h, bool isTriangle) {
    double s = (1 / 2) * a * h;
    return s;
}
//4
void swapValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}
void swapLink(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}
//5
int factorial(int &n) {
    if (n <= 1)
        return 1;
    return n * factorial(--n);
}
//6

void Square(int x) {
    for (int i = 0; i<x; i++) {
        for (int j = 0; j<x; j++) {
            cout << "*";
        }
        cout << endl;
    }
}


void allFunctions() {
    cout << "Сума цілих чисел: " << sum(3,6) << endl;
    cout << "Сума чисел з плаваючою точкою: " << sum(2.2,6.7) << endl;
    cout << "Сумма двох рядків: " << sum(string("завдання"), string(" виконано")) << endl;

    cout << "Мін. за значенням: " << min(2,6) << endl;
    cout << "Ьін. за ссилкою: " << min(2,6) << endl;

    cout << "Площа квадрата зі стороною 5: " << area(5) << endl;
    cout << "Площа прямокутника з шириною 4 і висотою 6: " << area(4.0, 6.0) << endl;
    cout << "Площа кола з радіусом 3: " << area(3, true) << endl;
    cout << "Площа трикутника зі сторонами 3, 4 : " <<area(3, 4, true) << endl;
  
    cout << "За значенням:" << swapValue(3, 6) << endl;
    cout << "За посиланням:" << swapValue(3, 6) << endl;

    cout << "Факторіал 5= "<< factorial(5)<< endl;

    cout << "Квадрат розміром 5х5:" << endl; Square(5);


    int main() {

    allFunctions();

    return 0;
}
