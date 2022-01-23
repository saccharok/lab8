package com.company;
import java.util.Scanner;

public class Wolf
{
    private String name = new String();
    private int age;
    private int number;

    public Wolf () {};

    public void Set (String _name, int _age, int _number)
    {
        Wolf wolf = this;
        this.name = _name;
        this.age = _age;
        this.number = _number;
    }

    public void Get ()
    {
        String _name;
        int _age;
        int _number;
        Scanner in = new Scanner(System.in);
        System.out.println("Имя волка: ");
        _name = in.nextLine();
        do
        {
            System.out.println("Возраст волка: ");
            _age = in.nextInt();
        } while (_age < 0);
        do
        {
            System.out.println("Номер вольера: ");
            _number = in.nextInt();
        } while (_number < 1 || _number > 3);
        name = _name;
        age = _age;
        number = _number;
    }

    public void Print ()
    {
        System.out.printf("Волк. Имя: %s. Возраст: %d. Номер вольера: %d.\n", name, age, number);
    }
}
