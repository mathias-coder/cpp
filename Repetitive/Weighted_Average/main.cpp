#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double n1, n2, n3, media;
    int N;
    
    cout << "How many cases do you'll input? ";
    cin >> N;

    for(int i = 0; i < N; i++){
        cout << "Type three numbers: " << endl;
        cin >> n1 >> n2 >> n3;
        
        cout << fixed << setprecision(1);

        media = (n1 * 0.2) + (n2 * 0.3) + (n3 * 0.5);
        cout << "AVERAGE = " << media << endl;
    }
    return 0;
}