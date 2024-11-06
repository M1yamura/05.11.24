#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double amount;
    cout << "Введите сумму: ";
    cin >> amount;

    int dollars = static_cast<int>(amount);
    int cents = static_cast<int>((amount - dollars) * 100 + 0.5); // округление

    cout << dollars << " долларов и " << cents << " центов" << endl;

    return 0;
}