using System;

class Program
{
    static void Main()
    {
        int[] numbers = { 1, 5, 3, 9, 2, 8 };
        int max = numbers[0];

        for (int i = 1; i < numbers.Length; i++)
        {
            if (numbers[i] > max)
            {
                max = numbers[i];
            }
        }

        Console.WriteLine("Największa wartość w tablicy to: " + max);
    }
}