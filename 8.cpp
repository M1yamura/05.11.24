#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double principal, annual_rate, monthly_payment;

    cout << "Вклад(в евро): ";
    cin >> principal;

    cout << "Процент годовых: ";
    cin >> annual_rate;

    double monthly_rate = annual_rate / 100 / 12;

    monthly_payment = principal * monthly_rate;

    cout << "Ежемесячная выплата: " 
         << fixed << setprecision(2) << monthly_payment << " евро" << endl;
  
    return 0;
}
