#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "russian");
    string message;
    cout << "Введите текст телеграммы: ";
    getline(cin, message);
    int characterCount = message.length();
    int cost = 1;
    cout << "Количество символов: " << characterCount << endl;
    cout << "Стоимость телеграммы: " << characterCount * cost << " копеек." << endl;

    return 0;
}
