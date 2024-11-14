#include <cmath>
#include <iostream>
using namespace std;
int main() {
    for (int num = 100;num <= 999;num++)
    {
        if (num % 47 == 43 && num % 43 == 47)
        {
            cout << num << endl;
        }
    }
    return 0;
}