#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double distance, time_minutes, time_seconds, total_time_seconds, speed;

    cout << "Calculating running speed." << endl;
    cout << "Enter the length of distance (meters) = ";
    cin >> distance;

    cout << "Enter time (min.sec) = ";
    cin >> time_minutes >> time_seconds;

    // Преобразуем время в секунды
    total_time_seconds = time_minutes * 60 + time_seconds;

    // Вычисляем скорость в м/с
    speed = distance / total_time_seconds;

    // Преобразуем скорость в км/ч
    speed *= 3.6;

    cout << "Distance: " << distance << " m" << endl;
    cout << "Time: " << static_cast<int>(time_minutes) << " min " 
         << static_cast<int>(time_seconds) << " sec = " 
         << total_time_seconds << " seconds" << endl;
    cout << "You were running at speed " << fixed << setprecision(2) 
         << speed << " km/h" << endl;

    return 0;
}
