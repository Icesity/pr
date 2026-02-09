#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, ""); // Исправлено использование setlocale

    int language, num;

    cout << "[+] Переводчик\n"
        << endl
        << "[1] Русские слова\n"
        " [2] Английские слова\n\n"
        << "[3] Выйти\n"; // Изменил опцию выхода на '3'

    cin >> language;

    if (language != 1 && language != 2)
        return 0; // Если выбрана третья опция ("Выход"), программа завершится

    switch (language) {
    case 1: { // Блок перевода русских слов
        cout << "\n[+] Переводчик \"Список русских слов\"\n"
            << "[1] океан\n"
            "[2] слон\n"
            "[3] лестница\n"
            "[4] планетарий\n"
            "[5] самолёт\n"
            "[6] воспоминания\n"
            "[7] лето\n"
            "[8] стелька\n"
            "[9] волна\n"
            "[10] тупик\n"
            "[11] восстание\n"
            "[12] авокадо\n"
            "[13] мельница\n"
            "[14] лодка\n"
            "[15] квартира\n"
            << "\n[3] Выберите номер слова: ";
        cin >> num;

        switch (num) {
        case 1: cout << "[+] Перевод: океан -> ocean"; break;
        case 2: cout << "[+] Перевод: слон -> an elephant"; break;
        case 3: cout << "[+] Перевод: лестница -> stairs"; break; // Исправлена ошибка в переводе
        case 4: cout << "[+] Перевод: планетарий -> planetarium"; break;
        case 5: cout << "[+] Перевод: самолёт -> airplane"; break; // Используем правильный термин
        case 6: cout << "[+] Перевод: воспоминания -> memories"; break;
        case 7: cout << "[+] Перевод: лето -> summer"; break;
        case 8: cout << "[+] Перевод: стелька -> insole"; break;
        case 9: cout << "[+] Перевод: волна -> wave"; break;
        case 10: cout << "[+] Перевод: тупик -> dead end"; break;
        case 11: cout << "[+] Перевод: восстание -> uprising"; break; // Уточнён перевод
        case 12: cout << "[+] Перевод: авокадо -> avocado"; break;
        case 13: cout << "[+] Перевод: мельница -> mill"; break;
        case 14: cout << "[+] Перевод: лодка -> boat"; break;
        case 15: cout << "[+] Перевод: квартира -> apartment"; break;
        default: cout << "Неверный выбор."; break;
        }
    } break;

    case 2: { // Блок перевода английских слов
        cout << "\n[+] Переводчик \"Список английских слов\"\n"
            << "[1] horse\n"
            "[2] mockingbird\n"   // Исправлен орфографический дефект
            "[3] pancake\n"
            "[4] sweater\n"
            "[5] jeans\n"
            "[6] kettle\n"
            "[7] blueberry\n"
            "[8] moon\n"
            "[9] love\n"
            "[10] pistol\n"
            "[11] sunshine\n"
            "[12] widow\n"
            "[13] cavalry\n"      // Исправлен перевод
            "[14] destination\n"
            "[15] weakness\n"
            << "\n[3] Выберите № слова: ";
        cin >> num;

        switch (num) {
        case 1: cout << "[+] Перевод: horse -> лошадь"; break;
        case 2: cout << "[+] Перевод: mockingbird -> пересмешник"; break;
        case 3: cout << "[+] Перевод: pancake -> блин"; break;     // Улучшен перевод
        case 4: cout << "[+] Перевод: sweater -> свитер"; break;
        case 5: cout << "[+] Перевод: jeans -> джинсы"; break;
        case 6: cout << "[+] Перевод: kettle -> чайник"; break;
        case 7: cout << "[+] Перевод: blueberry -> черника"; break;
        case 8: cout << "[+] Перевод: moon -> луна"; break;
        case 9: cout << "[+] Перевод: love -> любовь"; break;
        case 10: cout << "[+] Перевод: pistol -> пистолет"; break;
        case 11: cout << "[+] Перевод: sunshine -> солнечный свет"; break;
        case 12: cout << "[+] Перевод: widow -> вдова"; break;
        case 13: cout << "[+] Перевод: cavalry -> кавалерия"; break; // Исправлен перевод
        case 14: cout << "[+] Перевод: destination -> пункт назначения"; break;
        case 15: cout << "[+] Перевод: weakness -> слабость"; break;
        default: cout << "Неверный выбор."; break;
        }
    } break;
    }

    return 0;
}