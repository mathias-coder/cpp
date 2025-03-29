#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double price, cash, totalPrice, lack, change; 
    int qtd;

    cout << "Product price: ";
    cin >> price;
   
    cout << "Amount: ";
    cin >> qtd;
   
    cout << "Money received: ";
    cin >> cash;

    totalPrice = qtd * price;

    cout << fixed << setprecision(2);

    if(cash < totalPrice){
        lack = totalPrice - cash;
        cout << "Insufficient money. There is " << lack << " less than the total price." << endl;
    }

    else{
        change = cash - totalPrice;
        cout << "CHANGE = " << change << endl;
    }

    return 0;
}