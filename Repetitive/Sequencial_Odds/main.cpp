#include <iostream>

using namespace std;

int main(){
    int x, i, N;

    cout << "Enter the X value: ";
    cin >> x;

    for(int i = 1; i <= x; i++){
        if(i % 2 != 0){
            cout << i << endl;
        }
    }
    return 0;
}