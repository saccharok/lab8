package com.company;

import java.util.Scanner;

public class Fox {
    private String name;
    private double weight;
    private int age;
    private int number;

    public Fox() { };

    public void Set (String _name, double _weight, int _age, int _number)
    {
        Fox fox = this;
        this.name = _name;
        this.weight = _weight;
        this.age = _age;
        this.number = _number;
    };

    public void Get ()
    {
        String _name;
        double _weight;
        int _age;
        int _number;
        Scanner in = new Scanner(System.in);
        System.out.println("Имя лисы: ");
        _name = in.nextLine();
        do
        {
            System.out.println("Вес лисы в кг: ");
            _weight = in.nextDouble();
        } while (_weight < 1);
        do
        {
            System.out.println("Возраст лисы: ");
            _age = in.nextInt();
        } while (_age < 0);
        do
        {
            System.out.println("Номер вольера: ");
            _number = in.nextInt();
        } while (_number < 5 || _number > 6);
        name = _name;
        weight = _weight;
        age = _age;
        number = _number;
    }

    public void Print()
    {
        System.out.printf("Имя лисы: %s. Вес лисы: %l. Возраст лисы: %d. Номер вольера: %d\n", name, weight, age, number);
    }
}