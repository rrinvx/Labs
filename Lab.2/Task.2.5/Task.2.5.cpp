// Користувач вводить ціле число в першу і другу змінну, 
//в циклі один раз виводяться адреси цих змінних, потім виводяться значення від першої до другої змінної, але тільки зі знаком мінус.

#include <iostream>
using namespace std;

int main() {
    setlocale(0, ".1251");
    int firstElement,secondElement;
    cout << "ВВедіть першу змінну:" << endl;
        cin >> firstElement;
    cout << "Введіть другу змінну:" << endl;
        cin >> secondElement;

        cout <<"Адреса першої змінної: "<< &firstElement << endl;
        cout <<"Адреса другої змінної: "<< & secondElement << endl;

        for (int i=firstElement;i<=secondElement;i++)
        {
            cout << "Значення (з мінусом) від першої змінної до другої: " <<-i<< endl;
            
        }
             
           

    return 0;
}
