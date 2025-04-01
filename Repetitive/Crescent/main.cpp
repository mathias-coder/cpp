#include <iostream>

using namespace std;

int main(){
    int x, y;

    cout << "Enter two numbers: " << endl;
    cin >> x;
    cin >> y;

    while(x != y){
        if (x < y){
            cout << "ASCEND!" << endl;
        }
        else{
            cout << "DESCEND!" << endl;
        }
        cout << "Enter two other numbers:" << endl;
        cin >> x;
        cin >> y;
    }

    return 0;
}