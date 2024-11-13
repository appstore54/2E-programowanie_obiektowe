using System;

class Program
{
    static void Main()
    {
        int[] numbers = { 4, 8, 15, 16, 23, 42 };
        int sum = 0;

        for (int i = 0; i < numbers.Length; i++)
        {
            sum += numbers[i];
        }

        double average = (double)sum / numbers.Length;
        Console.WriteLine("Średnia wartość: " + average);
    }
}