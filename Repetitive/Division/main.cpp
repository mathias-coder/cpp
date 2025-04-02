#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int N, a, b;
    double div;

    cout << "How many cases do you'll input? ";
    cin >> N;

    for(int i = 0; i < N; i++){
        cout << "Type the numerator: ";
        cin >> a;

        cout << "Type the denominator: ";
        cin >> b;

        div = (double)a / b;
        cout << fixed << setprecision(2);
        if(a == 0){
            cout << "DIVISION = 0.00" << endl;
        }
        else if(b == 0){
            cout << "IMPOSSIBLE DIVISION" << endl;
        }
        else{
            cout << "DIVISION = " << div << endl;
        }
    }
    return 0;
}