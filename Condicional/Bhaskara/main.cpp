#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{   
    double a, b, c, x1, x2, delta;

    cout << "Coefficient A: ";
    cin >> a;
    cout << "Coefficient B: ";
    cin >> b;
    cout << "Coefficient C: ";
    cin >> c;

    delta = pow(b, 2) - 4 * a * c;

    x1 = (- b + sqrt(delta)) / (2 * a);
    x2 = (- b - sqrt(delta)) / (2 * a);

    if(a < 0 || delta < 0){
        cout << "The equation has no real roots" << endl;
    }
    else{
        cout << "X1 = " << fixed << setprecision(4) << x1 << endl;
        cout << "X2 = " << fixed << setprecision(4) << x2 << endl;
    }

    return 0;
}