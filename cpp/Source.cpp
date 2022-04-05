#include <iostream>;
using namespace std;

int main()
{

	setlocale(0, "");

	int slojn;
	int Ico = 0;
	int g, h;
	int maxn, minn;
	int reckt,plus=0;


	cout << "\t\tПроверка знания таблицы умножения" << endl << endl;

	cout << "Введите уровень сложности [I,II,III]: ";
	cin >> slojn;

	cout << "Чтобы выйти нажмите '0'";

	switch (slojn) {
	case 1: {
		cout << "Вы выбрали I лвл" << endl;
		Ico = 3;
		minn = 0;
		maxn = 5;
		break;
	}
	case 2: {
		cout << "Вы выбрали II лвл" << endl;
		Ico = 5;
		minn = 3;
		maxn = 7;
		break;
	}
	case 3: {
		cout << "Вы выбрали III лвл" << endl;
		Ico = 7;
		minn = 3;
		maxn = 10;
		break;
	}   
	default:
		cout << "\nОшибка!!!" << endl;
		break;
	}
	
	for (int i = 0; i < Ico; i++) {
		g = rand() % maxn + minn;
		h = rand() % maxn + minn;
		cout << g << "*" << h << "=";
		cin >> reckt;
		if (g * h == reckt) { plus++; }
	}

	cout << "\nЗавершен тест,вы ответили на " << plus << " из " << Ico << endl;

	system("pause");
	return 0;
}

