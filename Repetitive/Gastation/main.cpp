#include <iostream>

using namespace std;

int main(){
    int x = 0, alc = 0, gas = 0, diesel = 0; // alc = 1; gas = 2; diesel = 3; //

    while(x != 4){
        cout << "Type a code (1, 2, 3) or 4 to stop: ";
        cin >> x;

        if(x == 1){
            alc++;
        }
        else if(x == 2){
            gas++;
        }
        else if(x == 3){
            diesel++;
        }

    }

    cout << "Thank you!" << endl;
    cout << "Alcohol: " << alc << endl;
    cout << "Gasoline: " << gas << endl;
    cout << "Diesel: " << diesel << endl;



    return 0;
}


