#pragma once
#include <iostream>
#include <Windows.h>
using namespace std;

class Bear
{
private:
	std::string name;
	double weight;
	double high;
	int age;
	int number;
public:
	Bear() {};
	void SetBear(std::string _name, double _weight, double _high, int _age)
	{
		this->name = _name;
		this->weight = _weight;
		this->high = _high;
		this->age = _age;
		this->number = 7;
	};
	void GetBear()
	{
		cout << "��� �������: ";
		cin >> name;
		while (weight <= 0)
		{
			cout << "��� ������� � ��: ";
			cin >> weight;
		}
		while (high <= 0)
		{
			cout << "���� �������: ";
			cin >> high;
		}
		while (age <= 0)
		{
			cout << "������� �������: ";
			cin >> age;
		}
		number = 7;
	}
	void PrintBear()
	{
		cout << "��� ������� - " << name << ", ��� ������� - " << ", ���� ������� - " << ", ������� ������� - " << age << ", ����� ������� - " << number << endl;
	}
	~Bear() {};
};