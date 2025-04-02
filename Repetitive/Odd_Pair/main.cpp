#include <iostream>

using namespace std;

int main (){
    int N, x;

    cout << "How many inputs? ";
    cin >> N;

    for(int i = 0; i < N; i++){
        cout << "Type a number: ";
        cin >> x;

        if(x % 2 != 0 && x > 0){
            cout << "POSITIVE ODD" << endl;
        }
        else if(x % 2 != 0 && x < 0){
            cout << "NEGATIVE ODD" << endl;
        }
        else if(x % 2 == 0 && x < 0){
            cout << "NEGATIVE PAIR" << endl;
        }
        else if(x % 2 == 0 && x > 0){
            cout << "POSITIVE PAIR" << endl;
        }
        else{
            cout << "NULL" << endl;
        }
    }

    return 0;
}