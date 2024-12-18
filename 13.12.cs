using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;

class Program
{
    // Zadanie 1, 3
    private static int privateVariable = 50; 
    static int globalVariable = 10; // Zmienna globalna

    static void Main(string[] args)
    {
        // Zadanie 1: 
        Console.WriteLine($"Zadanie 1: {globalVariable}");

        // Zadanie 2:
        double number = 20.5;
        number += 15.3;
        Console.WriteLine($"Zadanie 2: {number}");

        // Zadanie 3: 
        Console.WriteLine($"Zadanie 3: {privateVariable}");

        // Zadanie 4: 
        for (int i = 0; i < 1; i++)
        {
            int localVar = 25;
            Console.WriteLine($"Zadanie 4: {localVar}");
        }

        // Zadanie 5:
        string text;
        text = "hello";
        Console.WriteLine($"Zadanie 5: {text}");

        // Zadanie 6: 
        int a = 10, b = 20;
        Console.WriteLine($"Zadanie 6: {(a > b ? "a jest większe" : "b jest większe")}");

        // Zadanie 7: 
        int x = 5;
        double y = 3.5;
        string z = "wynik";
        Console.WriteLine($"Zadanie 7: Suma: {x + y}, Tekst: {z + x}");

        // Zadanie 8: 
        int[] numbers = new int[5];
        for (int i = 0; i < 5; i++) numbers[i] = i + 1;
        Console.WriteLine("Zadanie 8:");
        foreach (var num in numbers) Console.WriteLine(num);

        // Zadanie 9: 
        int[,] matrix = new int[2, 3] { { 1, 2, 3 }, { 4, 5, 6 } };
        Console.WriteLine($"Zadanie 9: {matrix[1, 0]}");

        // Zadanie 10: 
        int[][] jaggedArray = new int[3][];
        jaggedArray[0] = new int[] { 1, 2 };
        jaggedArray[1] = new int[] { 3, 4, 5 };
        jaggedArray[2] = new int[] { 6 };
        Console.WriteLine("Zadanie 10:");
        foreach (var val in jaggedArray[0]) Console.WriteLine(val);

        // Zadanie 11: 
        List<int> numList = new List<int> { 1, 2, 3, 4, 5 };
        Console.WriteLine($"Zadanie 11: Suma = {numList.Sum()}");

        // Zadanie 12:
        List<string> names = new List<string> { "Anna", "Jan", "Adam" };
        Console.WriteLine($"Zadanie 12: Pierwsze: {names.First()}, Ostatnie: {names.Last()}");

        // Zadanie 13: 
        ArrayList mixedList = new ArrayList { 1, "tekst", true };
        Console.WriteLine("Zadanie 13:");
        foreach (var item in mixedList) Console.WriteLine(item);

        // Zadanie 14: 
        Dictionary<int, int> squares = new Dictionary<int, int>();
        for (int i = 1; i <= 5; i++) squares[i] = i * i;
        Console.WriteLine($"Zadanie 14: {squares[3]}");

        // Zadanie 15: 
        int[] tenNumbers = new int[10];
        for (int i = 0; i < 10; i++) tenNumbers[i] = i + 1;
        Console.WriteLine("Zadanie 15:");
        foreach (var num in tenNumbers) Console.WriteLine(num);

        // Zadanie 16: 
        List<string> animals = new List<string> { "pies", "kot", "koń", "krowa" };
        Console.WriteLine("Zadanie 16:");
        foreach (var animal in animals) Console.WriteLine(animal);

        // Zadanie 17: 
        List<int> filteredList = new List<int> { 3, 7, 2, 8, 6 };
        Console.WriteLine("Zadanie 17:");
        foreach (var num in filteredList.Where(n => n > 5)) Console.WriteLine(num);

        // Zadanie 18: 
        Random rand = new Random();
        int[] randomNumbers = new int[5];
        for (int i = 0; i < 5; i++) randomNumbers[i] = rand.Next(1, 100);
        Array.Sort(randomNumbers);
        Console.WriteLine("Zadanie 18:");
        foreach (var num in randomNumbers) Console.WriteLine(num);

        // Zadanie 19:
        Dictionary<string, int> months = new Dictionary<string, int>
        {
            { "Styczeń", 31 }, { "Luty", 28 }, { "Marzec", 31 }
        };
        Console.WriteLine($"Zadanie 19: {months["Luty"]}");

        // Zadanie 20: 
        List<int> evenFilteredList = new List<int> { 1, 2, 3, 4, 5, 6 };
        evenFilteredList.RemoveAll(n => n % 2 == 0);
        Console.WriteLine("Zadanie 20:");
        foreach (var num in evenFilteredList) Console.WriteLine(num);
    }
}