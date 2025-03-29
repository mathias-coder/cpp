#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double minutes, value, total;

    cout << "Time spent: ";
    cin >> minutes;

    if (minutes > 100.00){
        total = minutes - 100.00;
        value = 50.00 + total * 2;
        cout << "Cost: R$" << fixed << setprecision(2) << value << endl;      
    }
    else{
        cout << "Cost: R$50.00" << endl;
    }

    return 0;
}