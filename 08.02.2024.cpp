#include <iostream>
 
 
 
using namespace std;
 
 
 
double kmnaMile(double km) {
    return km * 0.6214;
}

double milenaKm(double mile) {
    return mile / 0.6214;
}

double kmnagnaMetrynas(double kmnag) {
    return kmnag / 3.6;
}

double metrynasnaKmnag(double metrynas) {
    return metrynas * 3.6;
}

double celsiuszenafahrenheit(double celsiusze) {
    return celsiusze * 9 / 5 + 32;
}

double fahrenheitnaCelsiusze(double fahrenheit) {
    return (fahrenheit - 32) * 5 / 9; //6
 
}

double bitynaKilobity(double bity) { //7
    return bity / 1024;
}

double bitynaKilobajty(double bity) {//8
    return bity / 8192;
}

double bitynaGigabajty(double bity) {//9
    return bity / (8 * pow(2, 30));
}

double kilobitynaBity(double kilobity) {//10
    return kilobity * 1024;
}

double kilobitynaKilobajty(double kilobity) {//11
    return kilobity / 8;
}

double kilobitynaGigabajty(double kilobity) {//12
    return kilobity / (8 * pow(2, 20));
}

double kilobajtynaBity(double kilobajty) {//13
    return kilobajty * 8192;
}

double kilobajtynaKilobity(double kilobajty) {//14
    return kilobajty * 8;
}

double kilobajtynaGigabajty(double kilobajty) {//15
    return kilobajty / (pow(2, 20));
}

double gigabajtynaBity(double gigabajty) {//16
    return gigabajty * (8 * pow(2, 30));
}

double gigabajtynaKilobity(double gigabajty) {//17
    return gigabajty * (8 * pow(2, 20));
}

double gigabajtynaKilobajty(double gigabajty) {//18
    return gigabajty * pow(2, 20);
}

void wybor(int choice, double value) {
    double result;
    switch (choice) {
    case 1:
        result = kmnaMile(value);
        cout << value << " km na " << result << " mili" << endl;
        break;
    case 2:
        result = milenaKm(value);
        cout << value << " mile na " << result << " km" << endl;
        break;
    case 3:
        result = kmnagnaMetrynas(value);
        cout << value << " km/h na" << result << " m/s" << endl;
        break;
    case 4:
        result = metrynasnaKmnag(value);
        cout << value << " m/s na " << result << " km/h" << endl;
        break;
    case 5:
        result = celsiuszenafahrenheit(value);
        cout << value << "°C na " << result << "°F" << endl;
        break;
        
    case 6:
        result = fahrenheitnaCelsiusze(value);
        cout << value << "°F na " << result << "°C" << endl;
        break;
        
    case 7:
        result = bitynaKilobity(value);
        cout << value << "bity na " << result << "kilobity" << endl;
        break;
        
    case 8:
        result = bitynaKilobajty(value);
        cout << value << " bity na" << result << "kilobajty" << endl;
        break;
        
    case 9:
        result = bitynaGigabajty(value);
        cout << value << "bity na " << result << "Gigabajty" << endl;
        break;
        
    case 10:
        result = kilobitynaBity(value);
        cout << value << " Kilobity na" << result << "Bity" << endl;
        break;
        
    case 11:
        result = kilobitynaKilobajty(value);
        cout << value << "Kilobity na" << result << "Kilobajty" << endl;
        break;
        
    case 12:
        result = kilobitynaGigabajty(value);
        cout << value << "Kilobity na" << result << "Gigabajty" << endl;
        break;
        
    case 13:
        result = kilobajtynaBity(value);
        cout << value << "Kilobajty na" << result << "Bity" << endl;
        break;
        
    case 14:
        result = kilobajtynaKilobity(value);
        cout << value << "Kilobajty na" << result << "Kilobity" << endl;
        break;
        
    case 15:
        result = kilobajtynaGigabajty(value);
        cout << value << "Kilobajty na" << result << "Gigabajty" << endl;
        break;
        
    case 16:
        result = gigabajtynaBity(value);
        cout << value << " Gigabajty na" << result << "Bity" << endl;
        break;
        
    case 17:
        result = gigabajtynaKilobity(value);
        cout << value << " Gigabajty na" << result << "Kilobity" << endl;
        break;
        
    case 18:
        result = gigabajtynaKilobajty(value);
        cout << value << "Gigabajty na" << result << "Kilobajty" << endl;
        break;
 
    default:
        cout << "Niepoprawny wybor" << endl;
    }
}
 
int main() {
    int choice;
    double value;
 
    cout << "Wybierz jednostkę do konwersji:" << endl;
    
    cout << "1. km na miles" << endl;
    
    cout << "2. miles na km" << endl;
    
    cout << "3. km/h na m/s" << endl;
    
    cout << "4. m/s na km/h" << endl;
    
    cout << "5. stopnie C na F" << endl;
    
    cout << "6. stopnie F na C" << endl;
    
    cout << "7.bity na Kilobity" << endl;
    
    cout << "8.bity na Kilobajty" << endl;
    
    cout << "9.bity na Gigabajty" << endl;
    
    cout << "10.kilobity na Bity" << endl;
    
    cout << "11.kilobity na Kilobajty" << endl;
    
    cout << "12. kilobity na Gigabajty" << endl;
    
    cout << "13.kilobajty na Bity" << endl;
    
    cout << "14.kilobajty na Kilobity" << endl;
    
    cout << "15.kilobajty na Gigabajty" << endl;
    cout << "16.gigabajty na Bity" << endl;
    
    cout << "17.gigabajty na Kilobity" << endl;
    
    cout << "18. gigabajty na Kilobajty" << endl;
    cin >> choice;
 
    cout << "Podaj wartość do konwersji:" << endl;
    cin >> value;
 
    wybor(choice, value);
 
    return 0;
}