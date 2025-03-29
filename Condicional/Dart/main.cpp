#include <iostream>
#include <iomanip>

using namespace std;

int main()
{   
    double d1, d2, d3;

    cout << "Type the three distances: " << endl;
    cin >> d1;
    cin >> d2;
    cin >> d3;

    cout << fixed << setprecision(2);

    if(d1 > d2 && d1 > d3){
        cout << "Longest pitch: " << d1 << endl;
    }
    else if(d2 > d1 && d2 > d3){
        cout << "Longest pitch: " << d2 << endl;
    }
    else{
        cout << "Longest pitch: " << d3 << endl;
    }

    return 0;
}