using System;

class Program
{
    static void Main()
    {
        int[] numbers = { 5, 1, 4, 2, 8 };

        for (int i = 0; i < numbers.Length - 1; i++)
        {
            for (int j = 0; j < numbers.Length - 1 - i; j++)
            {
                if (numbers[j] > numbers[j + 1])
                {
                    int temp = numbers[j];
                    numbers[j] = numbers[j + 1];
                    numbers[j + 1] = temp;
                }
            }
        }

        Console.WriteLine("Posortowana tablica: " + string.Join(", ", numbers));
    }
}