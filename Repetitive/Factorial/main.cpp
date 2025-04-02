#include <iostream>

using namespace std;

int main(){
    int N, fat;

    cout << "Type the 'N' value(max 15): ";
    cin >> N;

    fat = 1;
    for(int i = N; i > 0; i--){
       fat = fat * i;
    }
    cout << "FACTORIAL = " << fat << endl;
    return 0;
}