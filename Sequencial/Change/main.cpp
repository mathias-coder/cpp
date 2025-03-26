#include <bits/stdc++.h>

using namespace std;

int main()
{
    double preco, cash, total, troco;
    int qtd;

    cout << "Preço unitario do produto: ";
    cin >> preco;
    cout << "Quantidade comprada: ";
    cin >> qtd;
    cout << "Dinheiro recebido: ";
    cin >> cash;

    total = preco * qtd;
    troco = cash - total;

    cout << "TROCO = " << fixed << setprecision(2) << troco << endl;




    return 0;
}
