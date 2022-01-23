#pragma once
#include <iostream>
#include <Windows.h>
using namespace std;

class Beaver
{
private:
	std::string name;
	double weight;
	double length;
	int number;
public:
	Beaver() {};
	void SetBeaver(std::string _name, double _weight, double _length)
	{
		this->name = _name;
		this->weight = _weight;
		this->length = _length;
		this->number = 4;
	};
	void GetBeaver()
	{
		cout << "Имя бобра: ";
		cin >> name;
		while (weight <= 0)
		{
			cout << "Вес бобра: ";
			cin >> weight;
		}
		while (length <= 0)
		{
			cout << "Длина хвоста бобра в сантиметрах: ";
			cin >> length;
		}
		number = 4;
	}
	void PrintBeaver()
	{
		cout << "Имя бобра - " << name << ",вес волка - " << weight << ", длина хвоста бобра в сантиметрах - " << length << ", номер вольера - " << number << endl;
	}
	~Beaver() {};
};