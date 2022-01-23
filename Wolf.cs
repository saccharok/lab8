using System;
using System.Collections.Generic;
using System.Text;

namespace lab8CS
{
    public class Wolf
    {
        public Wolf() { }
        public void Set(string _name, int _age, int _number)
        {
            Wolf wolf = this;
            this.name = _name;
            this.age = _age;
            this.number = _number;
        }
        public void Get()
        {
            string _name;
            int _age;
            int _number;
            Console.WriteLine("Имя волка: ");
            _name = Console.ReadLine();
            do
            {
                Console.WriteLine("Возраст волка: ");
                _age = Convert.ToInt32(Console.ReadLine());
            } while (_age < 0);
            do
            {
                Console.WriteLine("Номер вольера: ");
                _number = Convert.ToInt32(Console.ReadLine());
            } while (_number < 1 || _number > 3);
            name = _name;
            age = _age;
            number = _number;
        }
        public void Print()
        {
            Console.WriteLine($"\nВолк. Имя: {name}. Возраст: {age}. Номер вольера: {number}.\n");
        }
        ~Wolf() { }
        private string name 
        { 
            set
            {
                name = value;
            }
            get
            {
                return name;
            }
        }
        private int age 
        {
            set
            {
                age = value;
            }
            get
            {
                return age;
            }
        }
        private int number 
        {
            set
            {
                number = value;
            }
            get
            {
                return number;
            }
        }
    }
}
