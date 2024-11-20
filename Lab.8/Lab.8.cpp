#include <iostream>
#include <string>
using namespace std;

struct Player
{
    string name;
    string position;
    int goals;
    int matches;
    double rating;
};

void addPlayer(Player players[], int& count);
void displayPlayers(const Player players[], int count);
void searchPlayersByPosition(const Player players[], int count, const string& position);
int totalGoals(const Player players[], int count);
Player findTopScorer(const Player players[], int count);
Player findTopRatedPlayer(const Player players[], int count);
void updatePlayerStats(Player players[], int count, const string& name);
void formOptimalTeam(const Player players[], int count);

int main()
{
    const int MAX_PLAYERS = 20;
    Player players[MAX_PLAYERS];
    int playerCount = 0;

    int choice;
    do
    {
        cout << "Керування футбольною командою \n";
        cout << "1. Додати гравця\n";
        cout << "2. Список всіх гравців \n";
        cout << "3. Знайти гравця за позицією \n";
        cout << "4. Розрахунок кількості голів \n";
        cout << "5. Знайти найкращого бомбардира \n";
        cout << "6. Знайти гравця з найвижчим рейтингом \n";
        cout << "7. Оновлення статистики гравців \n";
        cout << "8. Вибір оптимального складу команди \n";
        cout << "9. Вихід \n";
        cout << "Виберіть опцію: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            addPlayer(players, playerCount);
            break;
        case 2:
            displayPlayers(players, playerCount);
            break;
        case 3:
        {
            string position;
            cout << "Ваедіть позицію гравця: ";
            cin >> position;
            searchPlayersByPosition(players, playerCount, position);
            break;
        }
        case 4:
            cout << "Загальна кількість забитих голів: " << totalGoals(players, playerCount) << endl;
            break;
        case 5:
        {
            Player topScorer = findTopScorer(players, playerCount);
            cout << "Найкращій бомбардир:" << topScorer.name << " з " << topScorer.goals << "голами .\n";
            break;
        }
        case 6:
        {
            Player topRated = findTopRatedPlayer(players, playerCount);
            cout << "Гравець з найвищім рейтингом: " << topRated.name << " з рейтингом " << topRated.rating << ".\n";
            break;
        }
        case 7:
        {
            string name;
            cout << "Введіть імʼя гравця для оновлення статистики: ";
            cin >> name;
            updatePlayerStats(players, playerCount, name);
            break;
        }
        case 8:
            formOptimalTeam(players, playerCount);
            break;
        case 9:
            cout << "Вихід з програми.\n";
            break;
        default:
            cout << "Невірний вибір.\n";
        }
    } while (choice != 9);

    return 0;
}

void addPlayer(Player players[], int& count)
{
    if (count >= 20)
    {
        cout << "Неможливо додати нових гравців,так як досягнуто максимального ліміту.\n";
        return;
    }
    cout << "Введіть імʼя гравця: ";
    cin >> players[count].name;
    cout << "Введіть позицію гравця: ";
    cin >> players[count].position;
    cout << "Введіть кількість голів: ";
    cin >> players[count].goals;
    cout << "Введіть кількість матчів: ";
    cin >> players[count].matches;
    cout << "Введіть рейтинг гравця: ";
    cin >> players[count].rating;
    count++;
    cout << "Гравець доданий.\n";
}

void displayPlayers(const Player players[], int count)
{
    if (count == 0)
    {
        cout << "Гравців в команді немає.\n";
        return;
    }
    cout << "Список гравців \n";
    for (int i = 0; i < count; i++)
    {
        cout << "Імʼя : " << players[i].name << ", Position: " << players[i].position
            << ", Голи: " << players[i].goals << ", Matches: " << players[i].matches
            << ", Рейтинг: " << players[i].rating << endl;
    }
}

void searchPlayersByPosition(const Player players[], int count, const string& position)
{
    bool found = false;
    for (int i = 0; i < count; i++)
    {
        if (players[i].position == position)
        {
            cout << "Імʼя: " << players[i].name << ", Goals: " << players[i].goals
                << ", Матчів: " << players[i].matches << ", Рейтинг: " << players[i].rating << endl;
            found = true;
        }
    }
    if (!found)
    {
        cout << "Гравець з такою позицією не знайдений: " << position << endl;
    }
}