#include <iostream>

using namespace std;

int main (){
    int h1, h2, gametime;

    cout << "Start of the game: ";
    cin >> h1;

    cout << "End of the game: ";
    cin >> h2;

    if(h1 == h2){
        gametime = 24;
    }
    else if(h1 > h2){
        gametime = h2 - h1 + 24;
    }
    else{
        gametime = h2 - h1;
    }

    cout << "GAME DURATION: " << gametime << " Hours" << endl;

    return 0;
}