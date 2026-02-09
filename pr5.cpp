#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int num, num2, suma, minus, plus, del, umn;
    string znak;
    cout << ("Введите первое число: ");
    cin >> num;
    cout << ("Введите второе число: ");
    cin >> num2;
    cout << ("Какое действие вы хотите совершить?: ");
    cin >> znak;
    if (znak == "+") {
        suma = num + num2;
        cout << "Результат суммы " << suma << endl;
    }
    else if (znak == "-") {
        minus = num - num2;
        cout << "Результат вычитания " << minus << endl;
    }
    else if (znak == "/") {
        del = num / num2;
        cout << "Результат деления " << del << endl;
    }

    else if (znak == "*") {
        umn = num * num2;
        cout << "Результат умножения " << umn << endl;
    }

}