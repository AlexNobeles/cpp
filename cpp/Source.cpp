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


	cout << "\t\t�������� ������ ������� ���������" << endl << endl;

	cout << "������� ������� ��������� [I,II,III]: ";
	cin >> slojn;

	cout << "����� ����� ������� '0'";

	switch (slojn) {
	case 1: {
		cout << "�� ������� I ���" << endl;
		Ico = 3;
		minn = 0;
		maxn = 5;
		break;
	}
	case 2: {
		cout << "�� ������� II ���" << endl;
		Ico = 5;
		minn = 3;
		maxn = 7;
		break;
	}
	case 3: {
		cout << "�� ������� III ���" << endl;
		Ico = 7;
		minn = 3;
		maxn = 10;
		break;
	}   
	default:
		cout << "\n������!!!" << endl;
		break;
	}
	
	for (int i = 0; i < Ico; i++) {
		g = rand() % maxn + minn;
		h = rand() % maxn + minn;
		cout << g << "*" << h << "=";
		cin >> reckt;
		if (g * h == reckt) { plus++; }
	}

	cout << "\n�������� ����,�� �������� �� " << plus << " �� " << Ico << endl;

	system("pause");
	return 0;
}

