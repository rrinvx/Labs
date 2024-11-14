//1. Напишіть функцію void copyValue(int* source, int* destination), яка копіює значення з однієї змінної в іншу, використовуючи вказівники.

//2. Напишіть функцію void countEvenOdd(int* a, int* b, int* c, int* evenCount, int* oddCount), яка приймає три числа і рахує, скільки з них є парними та скільки непарними.Результати передаються через вказівники evenCount і oddCount.

//3. Напишіть функцію void multiply(int* a, int* b, int* result), яка множить два числа і записує результат у змінну через вказівник result.

//4. Напишіть функцію void swapWithoutTemp(int* a, int* b), яка змінює значення двох змінних місцями без використання тимчасової змінної.

//5. Напишіть функцію void findMinMax(int* a, int* b, int* c, int* min, int* max), яка приймає три числа і знаходить найбільше та найменше з них, повертаючи результати через вказівники.

#include<cmath>
#include <iostream>
using namespace std;

// 1.
void copyValue(int* source, int* destination)
{
	*destination = *source;
}
// 2.
void countEvenOdd(int* a, int* b, int* c, int* evenCount, int* oddCount)
{
    *evenCount = 0; 
    *oddCount = 0; 

    if (*a % 2 == 0) { *evenCount++; }
    else *oddCount++;

    if (*b % 2 == 0) { *evenCount++; }
    else *oddCount++;

    if (*c % 2 == 0) { *evenCount++; }
    else *oddCount++;
}
//3.
void multiply(int* a, int* b, int* result)
{
    *result = (*a) * (*b);  
}

//4.
void swapWithoutTemp(int* a, int* b)
* a = b;
* b = a; 


//5.
void findMinMax(int* a, int* b, int* c, int* min, int* max)
min = *a;
max = *a;
if (*b < min) { *min = *b; }
if (*b > max) { *max = *b; }
if (*c < min) { *min = *c; }
if (*c > max) { *max = *c; }



int main()
{
  
    int a = 3, b = 4, c = 5;

    copyValue(&a, &b);
    cout << "Тепер b= " << b << endl; 

    int evenCount = 0, oddCount = 0;
    countEvenOdd(&a, &b, &c, &evenCount, &oddCount);
    cout << "Кількість парних: " << evenCount << ", Кількість непарних: " << oddCount << endl;

    int result = 0;
    multiply(&a, &b, &result);
    cout << "Результат множення: " << result << endl;  // Очікуємо result = 3 * 4 = 12

    cout << "Перед swapWithoutTemp: a = " << a << ", b = " << b << endl;
    swapWithoutTemp(&a, &b);
    cout << "Після swapWithoutTemp: a = " << a << ", b = " << b << endl;

    int minVal = 0, maxVal = 0;
    findMinMax(&a, &b, &c, &minVal, &maxVal);
    cout << "Мінімальне значення: " << minVal << ", Максимальне значення: " << maxVal << endl;
}
return 0; }