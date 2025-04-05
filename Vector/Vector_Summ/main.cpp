#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

int main(){
    int n;
    double soma = 0;

    cout << "Quantos numeros voce vai digitar? ";
    cin >> n;

    vector<double> vetor(n);
    
    for(int i = 0; i < n; i++){
        cout << "Digite um numero: ";
        cin >> vetor[i];
        soma = soma + vetor[i];
    }
    cout << endl;
    cout << fixed << setprecision(2);
    cout << "VALORES = ";
    for(int i = 0; i < n; i++){
        cout << " " << vetor[i] << " ";
    } 
    cout << endl;   
    cout << "SOMA = " << soma << endl;
    cout << "MEDIA = " << soma / n << endl;
    return 0;
}