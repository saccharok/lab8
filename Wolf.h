#pragma once
#include <iostream>
#include <Windows.h>
using namespace std;

class Wolf
{
private:
	std::string name;
	int age;
	int number;
public:
	Wolf() {};
	void SetWolf(std::string _name, int _age, int _number)
	{
		this->name = _name;
		this->age = _age;
		this->number = _number;
	};
	void GetWolf()
	{
		cout << "��� �����: ";
		cin >> name;
		while (age <= 0)
		{
			cout << "������� �����: ";
			cin >> age;
		}
		while (number < 1 || number > 2)
		{
			cout << "����� �������: ";
			cin >> number;
		}
	};
	void PrintWolf()
	{
		cout << "��� �����: " << name << ", ������� - " << age << ", ����� ������� - " << number << endl;
	}
	friend void NumbersWolfs(Wolf wolf1, Wolf wolf2, Wolf wolf3) {}
	~Wolf() {};
};