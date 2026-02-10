#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "");
    int number;

    while (true) {
        cout << "[ + ] Введите число: ";
        cin >> number;

        if (number == 0) {
            cout << "Выход из программы." << endl;
            break;
        }

        if (number < 1 || number > 15) {
            cerr << "[ ! ] Ошибка ввода. Введите целое число от 1 до 15!" << endl;
            continue;
        }

        int i = 1;
        while (i <= number) {
            cout << "[ + ] Цикл отработал. Круг: " << i << "." << endl;
            ++i;
        }
    }

    return 0;
}