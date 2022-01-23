package com.company;

import java.util.Scanner;

public class Beaver
{
    private String name;
    private double weight;
    private double length;
    private int number;
    public Beaver() { };

    public void Set (String _name, double _weight, double _length)
    {
        Beaver beaver = this;
        this.name = _name;
        this.weight = _weight;
        this.length = _length;
        this.number = 4;
    }

    public void Get ()
    {
        String _name;
        double _weight;
        double _lenght;
        Scanner in = new Scanner(System.in);
        System.out.println("Имя бобра: ");
        _name = in.nextLine();
        do
        {
            System.out.println("Вес бобра в кг: ");
            _weight = in.nextDouble();
        } while (_weight < 1);
        do
        {
            System.out.println("Длина хвоста бобра в см: ");
            _lenght = in.nextDouble();
        } while (_lenght < 0);
        name = _name;
        weight = _weight;
        length = _lenght;
        number = 4;
    }

    public void Print ()
    {
        System.out.printf("Имя бобра: %s. Вес - кг: %f. Длина хвоста - см: %f. Номер вольера: %d.\n", name, weight, length, number);
    }
}
