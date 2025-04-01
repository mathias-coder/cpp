#include <iostream>

using namespace std;

int main(){
    int x, soma = 0;

    cout << "Type an integer number: ";
    cin >> x;

    while (x != 0){
        if(x % 2 != 0){
            x++;
        }
        soma = 5 * x + 20;

        cout << "SOMA = " << soma << endl;
        
        cout << "Type an integer number: ";
        cin >> x;
    }


   

    return 0;
}