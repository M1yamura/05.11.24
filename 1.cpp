#include <iostream>
using namespace std;

int main() {
    double R1, R2, R3, R0;
    cout << "Введите сопротивления R1, R2, R3: ";
    cin >> R1 >> R2 >> R3;
    R0 = 1 / (1 / R1 + 1 / R2 + 1 / R3);
    cout << "Эквивалентное сопротивление R0: " << R0 << " Ом" << endl;

    return 0;
}
