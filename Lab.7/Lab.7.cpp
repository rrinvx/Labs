#include <iostream>
#include <string>
using namespace std;

struct Student
{
    string name;
    double assessment;
};

void addStudent(Student*& students, int& count);
void removeStudent(Student*& students, int& count, const string& name);
double calculateAverage(const Student* students, int count);
void displayStudents(const Student* students, int count);

int main()
{
    Student* students = nullptr;
    int studentCount = 0;
    int choice;

    do
    {
        cout << "Меню \n";
        cout << "1. Додати студента \n";
        cout << "2 . Видалити студента\n";
        cout << "3. Розрахувати середній бал \n";
        cout << "4. Показати список студентів \n";
        cout << "5. Вихід\n";
        cout << "Вибрати опцію: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            addStudent(students, studentCount);
            break;
        case 2:
        {
            string name;
            cout << "Введіть імʼя студента для видалення ";
            cin >> name;
            removeStudent(students, studentCount, name);
            break;
        }
        case 3:
            cout << "Середній бал: " << calculateAverage(students, studentCount) << endl;
            break;
        case 4:
            displayStudents(students, studentCount);
            break;
        case 5:
            cout << "Вийти з програми.\n";
            break;
        default:
            cout << "Невірний вибір \n";
        }
    } while (choice != 5);

    delete[] students;
    return 0;
}

void addStudent(Student*& students, int& count)
{
    Student* newStudents = new Student[count + 1];
    for (int i = 0; i < count; i++)
    {
        newStudents[i] = students[i];
    }

    cout << "Введіть ім'я студента: ";
    cin >> newStudents[count].name;
    cout << "Введіть оцінку студента: ";
    cin >> newStudents[count].assessment;

    delete[] students;
    students = newStudents; /
        count++;
}

void removeStudent(Student*& students, int& count, const string& name)
{
    int index = -1;
    for (int i = 0; i < count; i++)
    {
        if (students[i].name == name)
        {
            index = i;
            break;
        }
    }

    if (index == -1)
    {
        cout << "Студент не знайдений. \n";
        return;
    }

    Student* newStudents = new Student[count - 1];
    for (int i = 0, j = 0; i < count; i++)
    {
        if (i != index)
        {
            newStudents[j++] = students[i];
        }
    }

    delete[] students;
    students = newStudents;
    count--;

    cout << "Студент видалений.\n";
}

double calculateAverage(const Student* students, int count)
{
    if (count == 0)
        return 0.0;
    double sum = 0.0;
    for (int i = 0; i < count; i++)
    {
        sum += students[i].assessment;
    }
    return sum / count;
}

void displayStudents(const Student* students, int count)
{
    if (count == 0)
    {
        cout << "В списку немає студентів \n";
        return;
    }
    cout << "Список студентів \n";
    for (int i = 0; i < count; i++)
    {
        cout << "Імʼя: " << students[i].name << ",Оцінка: " << students[i].assessment << endl;
    }
}