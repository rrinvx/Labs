// 1. Напишіть програму, яка виводить усі парні числа від 1 до N, де N - введене число користувача.
//    Також наприкінці вивести суму парних чисел, загальну суму всіх чисел та суму непарних. 
//    Потім їх скласти між собою, привести до дробного типу, поділити на 2 і вивести результат.

#include <iostream>
using namespace std;
int main() {
    setlocale(0, ".1251");

    int N;
    int totalSum = 0;
    int SumPar = 0;
    int SumNep = 0;

    cout << "Input N: ";
    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        totalSum += i;
    }
    cout << "Сумма всех чисел: " << totalSum << endl;

    for (int i = 1; i <= N; i++)
    {
        if (i % 2 == 0)
        {
            SumPar += i;
        }
    }
    cout << "Сумма четных чисел: " << SumPar << endl;

    for (int i = 1; i <= N; i++)
    {
        if (i % 2 == 1)
        {
            SumNep += i;
        }
    }
    cout << "Сумма нечетных чисел: " << SumNep << endl;

    double result = (totalSum + SumPar + SumNep) / 2;
    cout << "Результат: " << result << endl;

    return 0;
}
