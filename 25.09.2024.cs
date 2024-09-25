using System;

class Program
{
    static void Main()
    {
        Console.WriteLine("Witaj świecie!");

        Console.Write("Podaj swoje imię: ");
        string name = Console.ReadLine();
        Console.WriteLine($"Cześć, {name}!");

        Console.Write("Podaj pierwszą liczbę: ");
        int num1 = int.Parse(Console.ReadLine());
        Console.Write("Podaj drugą liczbę: ");
        int num2 = int.Parse(Console.ReadLine());
        int sum = num1 + num2;
        Console.WriteLine($"Suma: {sum}");

        Console.Write("Podaj promień koła: ");
        double radius = double.Parse(Console.ReadLine());
        double area = Math.PI * Math.Pow(radius, 2);
        Console.WriteLine($"Pole powierzchni koła: {area}");

        Console.Write("Podaj temperaturę w stopniach Celsjusza: ");
        double celsius = double.Parse(Console.ReadLine());
        double fahrenheit = (celsius * 9 / 5) + 32;
        Console.WriteLine($"Temperatura w stopniach Fahrenheita: {fahrenheit}");

        Console.Write("Podaj liczbę całkowitą: ");
        int integer = int.Parse(Console.ReadLine());
        string integerString = integer.ToString();
        Console.WriteLine($"Liczba jako string: {integerString}");

        Console.Write("Podaj pierwszą liczbę: ");
        double number1 = double.Parse(Console.ReadLine());
        Console.Write("Podaj drugą liczbę: ");
        double number2 = double.Parse(Console.ReadLine());
        double average = (number1 + number2) / 2;
        Console.WriteLine($"Średnia: {average}");

        Console.Write("Podaj liczbę: ");
        int number = int.Parse(Console.ReadLine());
        int square = number * number;
        Console.WriteLine($"Kwadrat liczby: {square}");

        Console.Write("Podaj liczbę zmiennoprzecinkową: ");
        double floatNumber = double.Parse(Console.ReadLine());
        int convertedNumber = (int)floatNumber;
        Console.WriteLine($"Liczba całkowita: {convertedNumber}");
    }
}
