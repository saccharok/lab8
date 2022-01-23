// lab8C++.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <Windows.h>
#include "Workers.h"
#include "Wolf.h"
#include "Beaver.h"
#include "Fox.h"
#include "Raccon.h"
#include "Bear.h"
using namespace std;

void NumbersWolfs(Wolf wolf1, Wolf wolf2, Wolf wolf3)
{
	int i = 0, j = 0, k = 0;
	if (wolf1.number == 1)
		i++;
	else if (wolf1.number == 2)
		j++;
	else k++;
	if (wolf2.number == 1)
		i++;
	else if (wolf2.number == 2)
		j++;
	else k++;
	if (wolf3.number == 1)
		i++;
	else if (wolf3.number == 2)
		j++;
	else k++;
	cout << "Вольер - 1: ";
	cin >> i;
	cout << "Вольер - 2: ";
	cin >> j;
	cout << "Вольер - 3: ";
	cin >> k;
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
menu:
	system("cls");
	cout << " Зоопарк \"П О Л И Т Е Х Н И К \" " << endl << endl;
	cout << "1 " << "Волки" << endl;
	cout << "2 " << "Бобры" << endl;
	cout << "3 " << "Лисы" << endl;
	cout << "4 " << "Еноты" << endl;
	cout << "5 " << "Медведи" << endl << endl;
	cout << "Сотрудники - 6" << endl << endl;
	cout << "Выход из программы - 7" << endl;
	int check = 0;
	while (check < 1 || check > 7)
	{
		cin >> check;
		cout << endl;
	};
	if (check == 1)
	{
		system("cls");
		cout << " Зоопарк \"П О Л И Т Е Х Н И К \" " << endl << endl;
		cout << "   Волки" << endl << endl;
		Wolf wolf1;
		wolf1.GetWolf();
		Wolf wolf2;
		wolf2.SetWolf("Денис", 5, 1);
		wolf1.PrintWolf();
		wolf2.PrintWolf();
		char c;
		cout << endl << "Намжите любую клавишу для возвращения в меню." << endl;
		cin >> c;
		goto menu;
	}
	else if (check == 2)
	{
		system("cls");
		cout << " Зоопарк \"П О Л И Т Е Х Н И К \" " << endl << endl;
		cout << "   Бобры" << endl << endl;
		Beaver beaver1;
		beaver1.GetBeaver();
		Beaver beaver2;
		beaver2.SetBeaver("Лёха", 4.5, 14);
		beaver1.PrintBeaver();
		beaver2.PrintBeaver();
		char c = ' ';
		char c;
		cout << endl << "Намжите любую клавишу для возвращения в меню." << endl;
		cin >> c;
		goto menu;
	}
	else if (check == 3)
	{
		system("cls");
		cout << " Зоопарк \"П О Л И Т Е Х Н И К \" " << endl << endl;
		cout << "   Лисы" << endl << endl;
		Fox fox1;
		fox1.GetFox();
		Fox fox2;
		fox2.SetFox("Катя", 5, 5, 5);
		fox1.PrintFox();
		fox2.PrintFox();
		char c;
		cout << endl << "Намжите любую клавишу для возвращения в меню." << endl;
		cin >> c;
		goto menu;
	}
	else if (check == 4)
	{
		system("cls");
		cout << " Зоопарк \"П О Л И Т Е Х Н И К \" " << endl << endl;
		cout << "   Еноты" << endl << endl;
		Raccon rac1;
		rac1.GetRaccon();
		Raccon rac2;
		rac2.SetRaccon("Ваня", 4.4, 5);
		rac1.PrintRaccon();
		rac2.PrintRaccon();
		char c;
		cout << endl << "Намжите любую клавишу для возвращения в меню." << endl;
		cin >> c;
		goto menu;
	}
	else if (check == 5)
	{
		system("cls");
		cout << " Зоопарк \"П О Л И Т Е Х Н И К \" " << endl << endl;
		cout << "   Медведи" << endl << endl;
		Bear bear1;
		bear1.GetBear();
		Bear bear2;
		bear2.SetBear("Маша", 35, 149, 12);
		bear1.PrintBear();
		bear2.PrintBear();
		char c;
		cout << endl << "Намжите любую клавишу для возвращения в меню." << endl;
		cin >> c;
		goto menu;
	}
	else if (check == 6)
	{
		system("cls");
		cout << " Зоопарк \"П О Л И Т Е Х Н И К \" " << endl << endl;
		cout << "   Сотрудники" << endl << endl;
		Workers worker1;
		worker1.GetWorker();
		Workers::Name name1;
		Workers worker2;
		name1 = worker2.SetName("Земская", "Софья", "Сергеевна");
		worker2.SetWorker(name1, 123456, 1, 15000, 19);
		cout << "Получить информацию: \n 1.Кратко \n 2.Полностью";
		int flag;
		do {
			cin >> flag;
		} while (flag < 1 || flag > 2);
		if (flag == 1)
		{
			cout << "Кратко:" << endl;
			worker1.PrintName();
			worker2.PrintName();
		}
		else
		{
			cout << "Полностью: " << endl;
			worker1.PrintWorker(worker1);
			worker2.PrintWorker(worker2);
		}
		char c;
		cout << endl << "Намжите любую клавишу для возвращения в меню." << endl;
		cin >> c;
		goto menu;
	}
	else exit(1);
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
