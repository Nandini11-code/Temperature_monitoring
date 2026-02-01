#include <iostream>
using namespace std;

int main() {
    int days;
    float temp[31];
    float sum = 0, avg;
    float maxTemp, minTemp;

    cout << "Enter number of days (7 for week / 30 for month): ";
    cin >> days;

    
    for(int i = 0; i < days; i++) {
        cout << "Enter temperature for day " << i + 1 << ": ";
        cin >> temp[i];
        sum += temp[i];
    }


    maxTemp = temp[0];
    minTemp = temp[0];


    for(int i = 1; i < days; i++) {
        if(temp[i] > maxTemp)
            maxTemp = temp[i];
        if(temp[i] < minTemp)
            minTemp = temp[i];
    }

    avg = sum / days;

    cout << "\n----- Temperature Report -----\n";
    cout << "Maximum Temperature: " << maxTemp << "°C\n";
    cout << "Minimum Temperature: " << minTemp << "°C\n";
    cout << "Average Temperature: " << avg << "°C\n";

    return 0;
}
