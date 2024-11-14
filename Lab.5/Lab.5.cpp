#include <iostream>
#include <string>
using namespace std;

const int MAX_ACCOUNTS = 100;

void createAccount(string& owner, double& balance);
void topUp(double* balance);
void withdraw(double* balance);
void displayAccounts(const string owners[], const double balances[], int accountCount);

int main()
{
    string owners[MAX_ACCOUNTS];
    double balances[MAX_ACCOUNTS];
    int accountCount = 0;
    int choice;

    do
    {
        cout << "\n Меню \n";
        cout << "1. Створити рахунок\n";
        cout << "2. Поповнити рахунок\n";
        cout << "3. Зняти гроші з рахунку\n";
        cout << "4. Інформація про рахунок\n";
        cout << "5. Вихід\n";
        cout << "Виберіть опцію: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            if (accountCount < MAX_ACCOUNTS)
            {
                createAccount(owners[accountCount], balances[accountCount]);
                accountCount++;
            }
            else
            {
                cout << "Досягнуто макс. кількості облікових записів.\n";
            }
            break;
        case 2:
        {
            int accountNumber;
            cout << "Введіть номер ррахунку: ";
            cin >> accountNumber;
            if (accountNumber >= 0 && accountNumber < accountCount)
            {
                topUp(&balances[accountNumber]);
            }
            else
            {
                cout << "Такого номеру рахунку не існує.\n";
            }
            break;
        }
        case 3:
        {
            int accountNumber;
            cout << "Введіть номер рахунку: ";
            cin >> accountNumber;
            if (accountNumber >= 0 && accountNumber < accountCount)
            {
                withdraw(&balances[accountNumber]);
            }
            else
            {
                cout << "Такого номеру рахунку не існує.\n";
            }
            break;
        }
        case 4:
            displayAccounts(owners, balances, accountCount);
            break;
        case 5:
            cout << "Вихід з програми \n";
            break;
        default:
            cout << "Невірний вибір,спробуйте ще \n";
        }
    } while (choice != 5);

    return 0;
}

void createAccount(string& owner, double& balance)
{
    cout << "Введіть ім'я власника рахунку: ";
    cin >> owner;
    cout << "Введіть початковий баланс: ";
    cin >> balance;
    cout << owner << "Створив(-ла) рахунок з балансом: " << balance << "грн " << endl;
}

void topUp(double* balance)
{
    double amount;
    cout << "Введіть суму поповнення: ";
    cin >> amount;
    if (amount > 0)
    {
        *balance += amount;
        cout << "Оновлений баланс: " << *balance << "грн" << endl;
    }
   

void withdraw(double* balance)
{
    double amount;
    cout << "Введіть суму для зняття: ";
    cin >> amount;
    if (amount > 0 && *balance >= amount)
    {
        *balance -= amount;
        cout << "Зняття виконано.Новий баланс: " << *balance << "грн" << endl;
    }
    else
    {
        cout << "Недостатньо коштів \n";
    }
}

void displayAccounts(const string owners[], const double balances[], int accountCount)
{
    cout << "\n Список облікових записів: \n";
    for (int i = 0; i < accountCount; i++)
    {
        cout << "Рахунок:  " << i + 1 << owners[i] << "Баланс: " << balances[i] << "грн" << endl;
    }
}