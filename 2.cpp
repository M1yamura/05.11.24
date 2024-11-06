#include <iostream>
#include <cmath>
using namespace std;
const double PI = 3.14159265358979323846;

int main() {
    double L, R, S;
    cout << "Длина окружности: ";
    cin >> L;
    R = L / (2 * PI);
    S = PI * R * R;
    cout << "Площадь круга: " << S << endl;

    return 0;
}
