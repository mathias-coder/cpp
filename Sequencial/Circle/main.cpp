#include <bits/stdc++.h>

using namespace std;

int main()
{
    double raio, area;

    cout << "Digite o valor do raio do circulo: ";
    cin >> raio;

    area = M_PI * pow(raio, 2);

    cout << "AREA = " << fixed << setprecision(3) << area << endl;


    return 0;
}
