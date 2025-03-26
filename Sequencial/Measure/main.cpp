#include <bits/stdc++.h>

using namespace std;

int main()
{
    double a, b, c, areaQ, areaT, areaTra;

    cout << "Digite a medida A: ";
    cin >> a;
    cout << "Digite a medida B: ";
    cin >> b;
    cout << "Digite a medida C: ";
    cin >> c;

    areaQ = pow(a, 2);
    areaT = a * b / 2;
    areaTra = (a + b) * c / 2;

    cout << fixed << setprecision(4);
    cout << "AREA DO QUADRADO = " << areaQ << endl;
    cout << "AREA DO TRIANGULO = " << areaT << endl;
    cout << "AREA DO TRAPEZIO = " << areaTra << endl;



    return 0;
}
