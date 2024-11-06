#include <iostream>
using namespace std;

int main() {
    double v, t, a, S;
    cout << "Введите скорость(v), время(t) и ускорение(a): ";
    cin >> v >> t >> a;

    S = v * t + (a * t * t) / 2;
    cout << "Пройденное расстояние S: " << S << " метров" << endl;

    return 0;
}
