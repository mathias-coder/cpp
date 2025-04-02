#include <iostream>

using namespace std;

int main(){
    int x, N, in = 0, out = 0;

    cout << "How many numbers you'll input? ";
    cin >> N;

    for(int i = 0; i < N; i++){
        cout << "Type a number: ";
        cin >> x;
           
        if(x >= 10 && x <= 20){
            in++;
        }
        else{
            out++;
        }
    }
    cout << in << " IN " << endl;
    cout << out << " OUT " << endl;

    return 0;
}