#include <bits/stdc++.h>

using namespace std;

int main()
{
    string nome;
    double valor, pagamento, horas;

    cout << "Nome: ";
    getline(cin, nome);
    cout << "Valor por hora: ";
    cin >> valor;
    cout << "Horas trabalhadas: ";
    cin >> horas;

    pagamento = valor * horas;

    cout << fixed << setprecision(2);
    cout << "O pagamento para " << nome << " deve ser " << pagamento << endl;


    return 0;
}
