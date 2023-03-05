#include <iostream>
using namespace std;

void averageTemps(double temperatures[5][7][3]) {
    double total = 0;
    double dayTotal, weekTotal;
    for (int week {0}; week < 3; week++) {
        weekTotal = 0;
        for (int day = 0; day < 7; day++) {
            dayTotal = 0;
            for (int temp = 0; temp < 5; temp++) {
                dayTotal += temperatures[temp][day][week];
                total += temperatures[temp][day][week];
            }
            cout << "Week " << week+1 << ". day " << day+1 << ". average temperature: " << dayTotal/5 <<"\n";
            weekTotal += dayTotal;
        }
        cout << "~~~  Week " << week+1 << ". average temperature: " << weekTotal/35 <<"  ~~~\n";
        cout << "------------------------------------------" <<"\n";
    }
    cout << "~~~  Total average temperature: " << total/105 <<"  ~~~\n";
}
int main() {
    double temperatures[5][7][3] = {
        {{20.5, 22.3, 21.7}, {19.2, 18.8, 20.1}, {21.6, 22.5, 23.4}, {24.2, 25.3, 26.1}, {27.5, 28.2, 29.1}, {30.8, 31.2, 32.1}, {33.5, 34.2, 35.1}},
        {{10.5, 12.3, 11.7}, {9.2, 8.8, 10.1}, {11.6, 12.5, 13.4}, {14.2, 15.3, 16.1}, {17.5, 18.2, 19.1}, {20.8, 21.2, 22.1}, {23.5, 24.2, 25.1}},
        {{5.5, 7.3, 6.7}, {4.2, 3.8, 5.1}, {6.6, 7.5, 8.4}, {9.2, 10.3, 11.1}, {12.5, 13.2, 14.1}, {15.8, 16.2, 17.1}, {18.5, 19.2, 20.1}},
        {{3.5, 4.3, 3.7}, {2.2, 1.8, 3.1}, {4.6, 5.5, 6.4}, {7.2, 8.3, 9.1}, {10.5, 11.2, 12.1}, {13.8, 14.2, 15.1}, {16.5, 17.2, 18.1}},
        {{1.5, 2.3, 1.7}, {0.2, 0.8, 1.1}, {2.6, 3.5, 4.4}, {5.2, 6.3, 7.1}, {8.5, 9.2, 10.1}, {11.8, 12.2, 13.1}, {14.5, 15.2, 16.1}}
    };
    averageTemps(temperatures);
    return 0;
}
