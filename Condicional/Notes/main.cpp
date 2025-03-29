#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double note1, note2, final;

    cout << "Type the first note: ";
    cin >> note1;
    cout << "Type the second note: ";
    cin >> note2;

    final = note1 + note2;

    cout << "FINAL NOTE = " << fixed << setprecision(2) << final << endl;

    if(final < 60.00){
        cout << "DISAPPROVE" << endl;
    }
    
    return 0;
}