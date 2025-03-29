#include <iostream>

using namespace std;

int main(){
    int x, y, troca;

    cout << "Type two numbers: " << endl;
    cin >> x;
    cin >> y;

    if(x % y == 0 || y % x == 0){
        cout << "The numbers are multiples. " << endl;
    }
    else{
        cout << "The numbers aren't multiples. " << endl;
    }

    return 0;
}