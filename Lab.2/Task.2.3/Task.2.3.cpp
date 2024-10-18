// 3. Використовуючи вкладені цикли, виведіть на екран трикутник із зірочок.

#include <iostream>
using namespace std;

int main() {
    int strok = 8;
    const char x = '*';

    for (int i = 1; i <= strok; i++) {
        cout << string(i, x) << endl;
    }

    return 0;
}