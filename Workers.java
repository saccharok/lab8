package com.company;

import java.util.Scanner;

public class Workers
{
    public static class Name
    {
        String lastName;
        String name;
        String patronymic;
        public Name () { };
        public void Set (String _lastName, String _name, String _patronymic)
        {
            Name name = this;
            this.lastName = _lastName;
            this.name = _name;
            this.patronymic = _patronymic;
        };
        public void Get ()
        {
            String _lastName;
            String _name;
            String _patronymic;
            Scanner in = new Scanner (System.in);
            System.out.println("Фамилия: ");
            _lastName = in.nextLine();
            System.out.println("Имя: ");
            _name = in.nextLine();
            System.out.println("Отчество: ");
            _patronymic = in.nextLine();
            lastName = _lastName;
            name = _name;
            patronymic = _patronymic;
        };
        public void Print ()
        {
            System.out.printf("ФИО: %s %s %s.\n", lastName, name, patronymic);
        };
    };
    Name name;
    int code;
    int number;
    int payroll;
    int age;
    static int pensionAge;
    public Workers () { };
    public void Set (Name _name, int _code, int _number, int _payroll, int _age)
    {
        Workers worker = this;
        this.name = _name;
        this.code = _code;
        this.number = _number;
        this.payroll = _payroll;
        this.age = _age;
    }
    public void Get (Name _name)
    {
        int _code;
        int _number;
        int _payroll;
        int _age;
        Scanner in = new Scanner(System.in);
        do
        {
            System.out.println("Код сотрудника: ");
            _code = in.nextInt();
        } while (_code < 100000 || _code > 999999);
        do
        {
            System.out.println("Номер вольера: ");
            _number = in.nextInt();
        } while (_number < 1 || _number > 7);
        do
        {
            System.out.println("Заработная плата: ");
            _payroll = in.nextInt();
        } while (_payroll <= 8000);
        do
        {
            System.out.println("Возраст сотрудника: ");
            _age = in.nextInt();
        } while (_age < 18);
        name = _name;
        code = _code;
        number = _number;
        payroll = _payroll;
        age = _age;
    }
    public static void WorkerToPension (Workers worker)
    {
        if (pensionAge <= worker.age)
        {
            System.out.printf("Отправьте работника на пенсию.\n");
        }

    }
    public void Print ()
    {
        name.Print();
        System.out.printf("Код сотрудника: %d. Номер вольера: %d. Заработная плата:  %d. Возраст: %d\n", code, number, payroll, age);

    }
}
