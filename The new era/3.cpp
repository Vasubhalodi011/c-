#include <iostream>
#include<string.h>
using namespace std;

class TimeConverter {
private:
    int seconds;

public:
    void readTimeInSeconds() {
        cout << "Enter time in seconds: ";
        cin >> seconds;
    }

    void convertToHHMMSS() {
        int hours, minutes, remainingSeconds;
        hours = seconds / 3600;
        remainingSeconds = seconds % 3600;
        minutes = remainingSeconds / 60;
        remainingSeconds = remainingSeconds % 60;

        cout << "Time in (HH:MM:SS) format: ";
        cout << hours << ":" << minutes << ":" << remainingSeconds << endl;
    }
};

int main() {
    TimeConverter timeObj;
    timeObj.readTimeInSeconds();
    timeObj.convertToHHMMSS();

    return 0;
}
