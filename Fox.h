#pragma once
#include <iostream>
#include <Windows.h>
using namespace std;

class Fox
{
private:
	std::string name;
	double weight;
	int age;
	int number;
public:
	Fox() {};
	void SetFox(std::string _name, double _weight, int _age, int _number)
	{
		this->name = _name;
		this->weight = _weight;
		this->age = _age;
		this->number = _number;
	};
	void GetFox()
	{
		cout << "��� ����: ";
		cin >> name;
		while (weight <= 0)
		{
			cout << "��� ����: ";
			cin >> weight;
		}
		while (age <= 0)
		{
			cout << "������� ����: ";
			cin >> age;
		}
		while (number < 5 || number > 6)
		{
			cout << "����� �������: ";
			cin >> number;
		};
	}
	void PrintFox()
	{
		cout << "��� ����� - " << name << ", ��� ����� - " << weight << ", ������� ���� - " << ", ����� ������� - " << number << endl;
	}
	~Fox() {};
};