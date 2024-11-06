#include <iostream>
using namespace std;

int main() {
    int days;
    cout << "Введите количество дней: ";
    cin >> days;

    int weeks = days / 7;
    int remaining_days = days % 7;

    cout << weeks << " недель и " << remaining_days << " дней" << endl;

    return 0;
}
