#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "");

	cout << "[+] Календарь" << endl;
	cout << "[1] Январь" << endl;
	cout << "[2] Февраль" << endl;
	cout << "[3] Март" << endl;
	cout << "[4] Апрель" << endl;
	cout << "[5] Май" << endl;
	cout << "[6] Июнь" << endl;
	cout << "[7] Июль" << endl;
	cout << "[8] Август" << endl;
	cout << "[9] Сентябрь" << endl;
	cout << "[10] Октябрь" << endl;
	cout << "[11] Ноябрь" << endl;
	cout << "[12] Декабрь" << endl;


	int month, day;
	cout << "Выберите месяц: ";
	cin >> month;
	cout << endl;

	string monthName;

	switch (month) {
	case 1: {
		cout << "Выбран месяц Январь\n";
		monthName = "Январь";
		break;
	}
	case 2: {
		cout << "Выбран месяц Февраль\n";
		monthName = "Февраль";
		break;
	}
	case 3: {
		cout << "Выбран месяц Март\n";
		monthName = "Март";
		break;
	}
	case 4: {
		cout << "Выбран месяц Апрель\n";
		monthName = "Апрель";
		break;
	}
	case 5: {
		cout << "Выбран месяц Май\n";
		monthName = "Май";
		break;
	}
	case 6: {
		cout << "Выбран месяц Июнь\n";
		monthName = "Июнь";
		break;
	}
	case 7: {
		cout << "Выбран месяц Июль\n";
		monthName = "Июль";
		break;
	}
	case 8: {
		cout << "Выбран месяц Август\n";
		monthName = "Август";
		break;
	}
	case 9: {
		cout << "Выбран месяц Сентябрь\n";
		monthName = "Сентябрь";
		break;
	}
	case 10: {
		cout << "Выбран месяц Октябрь\n";
		monthName = "Октябрь";
		break;
	}
	case 11: {
		cout << "Выбран месяц Ноябрь\n";
		monthName = "Ноябрь";
		break;

	}

	case 12: {
		cout << "Выбран месяц Декабрь\n";
		monthName = "Декабрь";
		break;
	}
	default:
		cout << "Неправильно введён номер месяца!\n";
		return 0;



	}

	cout << "Выберите день: ";
	cin >> day;
	switch (day) {
	case 1: break; case 2: break; case 3: break; case 4: break; case 5: break; case 6: break; case 7: break; case 8: break; case 9: break;
	case 10: break; case 11: break; case 12: break; case 13: break; case 14: break; case 15: break; case 16: break; case 17: break;
	case 18: break; case 19: break; case 20: break; case 21: break; case 22: break; case 23: break; case 24: break; case 25: break;
	case 26: break; case 27: break; case 28: break; case 29: break; case 30: break; case 31: break;
	default:
		cout << "Неправильно введён день!\n";
		return 0;
	}

	cout << "[+] Календарь: " << day << "" << monthName << "." << endl;
}