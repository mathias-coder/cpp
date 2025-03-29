#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double glucose;

    cout << "Enter the glucose measurement: ";
    cin >> glucose;

    if(glucose < 100){
        cout << "Classification: NORMAL" << endl;
    }
    else if(glucose < 140){
        cout << "Classification: HIGH" << endl;
    }
    else{
        cout << "Classification: DIABETES" << endl;
    }
    return 0;
}