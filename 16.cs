using System;

class Program
{
    static void Main()
    {
        Console.Write("Podaj liczbę: ");
        int number = int.Parse(Console.ReadLine());
        bool isPrime = true;

        for (int i = 2; i <= Math.Sqrt(number); i++)
        {
            if (number % i == 0)
            {
                isPrime = false;
                break;
            }
        }

        if (isPrime && number > 1)
        {
            Console.WriteLine($"{number} jest liczbą pierwszą.");
        }
        else
        {
            Console.WriteLine($"{number} nie jest liczbą pierwszą.");
        }
    }
}