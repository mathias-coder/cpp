#include <iostream>

using namespace std;

int main(){
    int x, y;

    cout << "Enter x and y coordinates: " << endl;
    cin >> x >> y;

    while(x != 0 && y != 0){
        if(x > 0 && y > 0){
            cout << "Quadrant I" << endl;
        } else if(x < 0 && y > 0){
            cout << "Quadrant II" << endl;
        } else if(x < 0 && y < 0){
            cout << "Quadrant III" << endl;
        } else {
            cout << "Quadrant IV" << endl;
        }
        cout << "Enter x and y coordinates: " << endl;
        cin >> x >> y;
    }
    cout << "NULL Coordinate" << endl;
    return 0;
}