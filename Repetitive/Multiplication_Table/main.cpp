#include <iostream>

using namespace std;

int main(){
    int N, i;

    cout << "Which number do you want the multiplication table for? ";
    cin >> N;

    for(i = 1; i <= 10; i++){
        cout << N << " x " << i << " = " << N * i << endl;
    }

    return 0;
}