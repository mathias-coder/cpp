#include <iostream>
#include <vector>

using namespace std;

int main(){
    int N, i;

    cout << "Quantos numeros voce vai digitar? ";
    cin >> N;

    vector<int> vetor(N);

    for(i = 0; i < N; i++){
        cout << "Digite um numero: ";
        cin >> vetor[i];
    }
    cout << "NUMEROS NEGATIVOS:" << endl;

    for(i = 0; i < N; i++){
        if(vetor[i] < 0){
            cout << vetor[i] << endl;
        }
    }
    return 0;
}