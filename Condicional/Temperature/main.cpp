#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    char escala;
    double celsius, fahrenheit;
    
    cout << "Which scale do you input (C/F)? ";
    cin >> escala;

    cout << fixed << setprecision(2);

    if(escala == 'F'){
        cout << "Type the Fahrenheit value: ";
        cin >> fahrenheit;
        celsius = 5.0 / 9.0 * (fahrenheit - 32.0);
        cout << "Celsius = " << celsius << endl;
    }
    else{
        cout << "Type the Celsius value: ";
        cin >> celsius;
        fahrenheit = celsius * 9.0 / 5.0 + 32.0;
        cout << "Fahrenheit = " << fahrenheit << endl;
    }

    return 0;
}