#include <iostream>

using namespace std;

int main(){
    int x, y;

    cout << "X: ";
    cin >> x;

    cout << "Y: ";
    cin >> y;

    if(x > 0 && y > 0){
        cout << "Q1" << endl;
    }
    else if(x < 0 && y > 0){
        cout << "Q2" << endl;
    }   
    else if (x < 0 && y < 0){
        cout << "Q3" << endl;
    }    
    else if(x > 0 && y < 0){
        cout << "Q4" << endl;
    }       
    else if(x == 0 && y == 0){
        cout << "Origin" << endl;
    }
    else if(y == 0){
        cout << "X-Axis" << endl;
    }
    else{
        cout << "Y-Axis" << endl;
    }

    return 0;
}