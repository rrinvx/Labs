#include <iostream>
using namespace std;

const int MAX_PRODUCTS =100;

string productNames[MAX_PRODUCTS];
int productQuantities[MAX_PRODUCTS];
double productPrices[MAX_PRODUCTS];
int productCount = 0;

void addProduct();
void deliteProduct();
void updateQuantity();
void showProducts();
void calculateTotalCost();

int main()
{
    int choice;
    do
    {
        
        cout << "\n Меню управління складом \n";
        cout << "1. Додати продукт\n";
        cout << "2. Видалити товар за назвою\n";
        cout << "3. Оновити кількість товару\n";
        cout << "4. Показати всі товари\n";
        cout << "5. Розрахунок загальної вартості товарів на складі.\n";
        cout << "6. Вихід\n";
        cout << "Виберіть опцію: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            addProduct();
            break;
        case 2:
            deliteProduct();
            break;
        case 3:
            updateQuantity();
            break;
        case 4:
            showProducts();
            break;
        case 5:
            calculateTotalCost();
            break;
        case 6:
            cout << "Вихід.";
            break;
        default:
            cout << "Невірний вибір. ";
        }
    } while (choice != 6);

    return 0;
}

void addProduct()
{
    if (productCount < MAX_PRODUCTS)
    {
        cout << "Введіть ім'я товару: ";
        cin >> productNames[productCount];
        cout << "Введіть кількість товару: ";
        cin >> productQuantities[productCount];
        cout << "Введіть ціну товару: ";
        cin >> productPrices[productCount];
        productCount++;
        cout << "Ви успішно додали товар.\n";
    }
    else
    {
        cout << "Склад заповнений,неможливо додати новий товар.\n";
    }
}

void deliteProduct()
{
    string name;
    cout << "Введіть назву товару для видалення: ";
    cin >> name;
    for (int i = 0; i < productCount; i++)
    {
        if (productNames[i] == name)
        {
            for (int j = i; j < productCount - 1; j++)
            {
                productNames[j] = productNames[j + 1];
                productQuantities[j] = productQuantities[j + 1];
                productPrices[j] = productPrices[j + 1];
            }
            productCount--;
            cout << "Ви успішно видалили товар.\n";
            return;
        }
    }
    cout << "Товар не знайдений\n";
}

void updateQuantity()
{
    string name;
    int newQuantity;
    cout << "Введіть назву продукту,кількість якого хочете змінити:: ";
    cin >> name;
    cout << "Введіть кількість: ";
    cin >> newQuantity;
    for (int i = 0; i < productCount; i++)
    {
        if (productNames[i] == name)
        {
            productQuantities[i] = newQuantity;
            cout << "Кількість оновлена.\n";
            return;
        }
    }
    cout << "Товар не знайдений.\n";
}

void showProducts()
{
    if (productCount == 0)
    {
        cout << "Товарів на складі немає.\n";
    }
    else
    {
        cout << "\n Список товарів на складі \n";
        for (int i = 0; i < productCount; i++)
        {
            cout << "Назва: " << productNames[i]
                << "Кількість: " << productQuantities[i]
                << "Ціна: " << productPrices[i] << "грн" << endl;
        }
    }
}

void calculateTotalCost()
{
    double total = 0;
    for (int i = 0; i < productCount; i++)
    {
        total += productQuantities[i] * productPrices[i];
    }
    cout << "Загальна вартість товарів на складі: " << total << "грн" << endl;
}