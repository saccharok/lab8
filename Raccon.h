#pragma once
#include <iostream>
#include <Windows.h>
using namespace std;

class Raccon
{
private:
	std::string name;
	double weight;
	int age;
	int number;
public:
	Raccon() {};
	void SetRaccon(std::string _name, double _weight, int _age)
	{
		this->name = _name;
		this->weight = _weight;
		this->age = _age;
		this->number = 7;
	};
	void GetRaccon()
	{
		cout << "��� �����: ";
		cin >> name;
		while (weight <= 0)
		{
			cout << "��� �����: ";
			cin >> weight;
		}
		while (age <= 0)
		{
			cout << "������� �����: ";
			cin >> age;
		}
		number = 7;
	};
	void PrintRaccon()
	{
		cout << "��� ���� - " << name << ", ��� ���� - " << weight << ", ������� ���� - " << ", ����� ������� - " << number << endl;
	}
	~Raccon() {};
};