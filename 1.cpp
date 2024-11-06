#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL,"ru");
    double R1, R2, R3, R0;
    std::cout << "Введите  R1, R2, R3: \n ";
    std::cin >> R1 >> R2 >> R3;
    if (R1 == 0 || R2 == 0 || R3 == 0) {
        std::cout << "Error: d.0\n";
            return 1;}
    R0 = 1 / (1 / R1 + 1 / R2 + 1 / R3);
    cout << "Эквивалентное сопротивление R0: " << R0 << " Ом" << endl;

    return 0;
}
