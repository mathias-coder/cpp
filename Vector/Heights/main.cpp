#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

using namespace std;

int main(){
    int n, menores = 0; 
    double mediaAlt, somaAlt = 0;

    cout << "Quantas pessoas serao digitadas? ";
    cin >> n;

    vector<double> altura(n);
    vector<int> idade(n);
    vector<string> nome(n);
    
    for(int i = 0; i < n; i++){
        cout << "Dados da " << i + 1 << "a pessoa: " << endl;
        cout << "Nome: ";
        cin.ignore(INT_MAX, '\n');
        getline(cin, nome[i]);

        cout << "Idade: ";
        cin >> idade[i];
        
        cout << "Altura: ";
        cin >> altura[i];
    }
    for(int i = 0; i < n; i++){
        somaAlt = somaAlt + altura[i];
    }
    mediaAlt = somaAlt / n;
    
    cout << endl;
    cout << "Altura media: " << fixed << setprecision(2) << mediaAlt << endl;
    cout << "Pessoas com menos de 16 anos: ";
    for(int i = 0; i < n; i++){
        if(idade[i] < 16){
            menores++;
        }
    }
    cout << menores * 100.0 / n << "%" << endl;

    for(int i = 0; i < n; i++){
        if(idade[i] < 16){
            cout << nome[i] << endl;
        }
    }
    return 0;
}