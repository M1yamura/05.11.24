#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double distance, time_input, time_seconds, speed;

    cout << "Calculating running speed." << endl;
    cout << "Enter the length of distance (meters) = ";
    cin >> distance;

    cout << "Enter time= ";
    cin >> time_input;

    int minutes = static_cast<int>(time_input); 
    double fractional_part = time_input - minutes;
    int seconds = static_cast<int>(fractional_part * 60); 

    time_seconds = minutes * 60 + seconds;

    speed = distance / time_seconds;

    speed *= 3.6;

    cout << "Distance: " << distance << " m" << endl;
    cout << "Time: " << minutes << " min " << seconds << " sec = " 
         << time_seconds << " seconds" << endl;
    cout << "You were running at speed " << fixed << setprecision(2) 
         << speed << " km/h" << endl;

    return 0;
}
