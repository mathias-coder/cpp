#include <iostream>

using namespace std;

int main(){
    int x, y, troca, soma = 0;

    cout << "Type two numbers: " << endl;
    cin >> x >> y;

    if(x > y){
        troca = x;
        x = y;
        y = troca;
    }
    
    for(int i = x + 1; i < y; i++){
        if(i % 2 != 0){
            soma = soma + i;
        }
    }

    cout << "SUM = " << soma << endl;


    return 0;
}