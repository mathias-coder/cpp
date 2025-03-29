#include <iostream>

using namespace std;

int main()
{
    int a, b, c;

    cout << "Enter the first value: ";
    cin >> a;
    cout << "Enter the second value: ";
    cin >> b;
    cout << "Enter the third value: ";
    cin >> c;

    if(a < b && a < c){
        cout << "MINOR = " << a << endl;
    }
    else if(b < a && b < c){
        cout << "MINOR = " << b << endl;
    }
    else{
        cout << "MINOR = " << c << endl;
    }

    return 0;
}