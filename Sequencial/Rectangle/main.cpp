#include <bits/stdc++.h>

using namespace std;

int main()
{
    double base, altura, area, diagonal, perimetro;

    cout << "Base do retangulo: ";
    cin >> base;
    cout << "Altura do retangulo: ";
    cin >> altura;

    area = base * altura;

    cout << fixed << setprecision(4);
    cout << "AREA = " << area << endl;

    perimetro = (2 * base) + (2 * altura);

    cout << "PERIMETRO = " << perimetro << endl;

    diagonal = sqrt(base * base + altura * altura);

    cout << "DIAGONAL = " << diagonal << endl;





    return 0;
}
