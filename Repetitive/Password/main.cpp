#include <iostream>

using namespace std;

int main(){
    int pass;
    
    cout << "Enter the password: " << endl;
    cin >> pass;

    while (pass != 2002){
        cout << "Invalid password. Try again: " << endl;
        cin >> pass;
    }

    cout << "Access granted." << endl;
    return 0;
}