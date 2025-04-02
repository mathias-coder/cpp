#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main(){
    int soma = 0, qtd, C = 0, S = 0, R = 0, N;
    char cobaia;

    cout << "Quantos casos serao digitados? ";
    cin >> N;

    for(int i = 0; i < N; i++){
        cout << "Quantidade de cobaias: ";
        cin >> qtd;

        cout << "Tipo de cobaia - Coelho(C); Sapo(S); Rato(R): ";
        cin >> cobaia;

        if(cobaia == 'C'){
            C = C + qtd;
        }
        else if(cobaia == 'S'){
            S = S + qtd;
        }
        else{
            R = R + qtd;
        }
        qtd = 0;
    }
    cout << endl;
    soma = (C + S + R);
    
    cout << "RELATORIO FINAL: " << endl;
    cout << "Total de cobaias: " << soma << endl;
    cout << "Total de Coelhos: " << C <<  endl;
    cout << "Total de Sapos: " << S << endl;
    cout << "Total de Ratos: " << R << endl;
    cout << fixed << setprecision(2);
    cout << "Porcentagem de Coelhos: " << (double)C * 100 / soma << "%" << endl;
    cout << "Porcentagem de Ratos: " << (double)R * 100 / soma << "%" << endl;
    cout << "Porcentagem de Sapos: " << (double)S * 100 / soma << "%" << endl;
    
    return 0;
}