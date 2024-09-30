<html>
<head> </head>
  <body>
<?php
// 1. 
$celsjusz = 25;
$fahrenheit = ($celsjusz * 9/5) + 32;
echo "Temperatura w Fahrenheitach: " . $fahrenheit . "\n";

// 2. 
$num1 = 10;
$num2 = 5;
echo "Dodawanie: " . ($num1 + $num2) . "\n";
echo "Odejmowanie: " . ($num1 - $num2) . "\n";
echo "Mnożenie: " . ($num1 * $num2) . "\n";
echo "Dzielenie: " . ($num1 / $num2) . "\n";

// 3. 
$promien = 7;
$pi = 3.14159;
$pole_kola = $pi * $promien * $promien;
echo "Pole koła: " . $pole_kola . "\n";

// 4. 
$wiek = 20;
$dni = $wiek * 365;
echo "Wiek w dniach: " . $dni . "\n";

// 5. 
$integer = 5;
$float = 5.5;
$string = "Pięć";
$boolean = true;
echo "Integer: " . $integer . "\n";
echo "Float: " . $float . "\n";
echo "String: " . $string . "\n";
echo "Boolean: " . $boolean . "\n";

// 6. 
$num_str1 = "8";
$num_str2 = "3";
$sum = (int)$num_str1 + (int)$num_str2;
echo "Suma: " . $sum . "\n";

// 7.
$imie_nazwisko = "Jan Kowalski";
echo "Małe litery: " . strtolower($imie_nazwisko) . "\n";
echo "Wielkie litery: " . strtoupper($imie_nazwisko) . "\n";
echo "Odwrotna kolejność: " . strrev($imie_nazwisko) . "\n";
echo "Długość: " . strlen($imie_nazwisko) . "\n";

// 8. 
$waga = 70;
$wzrost = 1.75;
$bmi = $waga / ($wzrost * $wzrost);
echo "BMI: " . $bmi . "\n";

// 9.
$odleglosc = 150; // km
$predkosc = 50; // km/h
$czas_podrozy = $odleglosc / $predkosc;
echo "Czas podróży: " . $czas_podrozy . " godzin\n";

// 10. 
$zlote = 100;
$kurs_euro = 4.5;
$euro = $zlote / $kurs_euro;
echo "Wartość w euro: " . number_format($euro, 2) . "\n";
?>
</body>
</html>
