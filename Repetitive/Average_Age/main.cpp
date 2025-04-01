#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double soma; 
    int x, cont;
    soma = 0;
    cont = 0;

    cout << "Type the age of the people: " << endl;
    cin >> x;

    if(x < 0){
        cout << "Impossible to calculate." << endl;
        return 1;
    }
    else{
        while (x > 0){
            soma = soma + x;
            cont++;
            cin >> x;
        }
    }    
    cout << fixed << setprecision(2);
    cout << "The average age is: " << soma / cont << endl;

    return 0;
}