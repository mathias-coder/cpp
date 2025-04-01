#include <iostream>
#include <iomanip> 

using namespace std;

int main (){
    double note1, note2;

    cout << "Type the first note: ";
    cin >> note1;

    while (note1 < 0 || note1 > 10){
        cout << "Invalid note. Type another: " << endl;
        cin >> note1;
    }

    cout << "Type the second note: ";
    cin >> note2;

    while (note2 < 0 || note2 > 10){
        cout << "Invalid note. Type another: " << endl;
        cin >> note2;
    }

    cout << "MEDIA = " << (note1 + note2) / 2 << fixed << setprecision(2) << endl;
        
    return 0;
}