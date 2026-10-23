/*
PREDICTIONS (Example using test case: battery = 15, charging = 0):
battery < 20: 1
battery < 20 && !charging: 1
battery == 100 || charging: 0
battery >= 0 && battery <= 100: 1
0 <= battery <= 100: 1

REAL OUTPUT (After running with battery = 15, charging = 0):
battery < 20: 1
battery < 20 && !charging: 1
battery == 100 || charging: 0
battery >= 0 && battery <= 100: 1
0 <= battery <= 100: 1

EXPLANATION OF 0 <= battery <= 100:
C++ reads the code strictly from left-to-right. The computer first evaluates 0 <= battery which shows 1 or 0 then it compares with the other statements asking if 1 <= 100 or 0 <= 100. THis means the entire condition outputs 1 no matter what.
*/

#include <iostream>
using namespace std;

int main() {
    int battery;
    int charging; 

    cout << "Enter battery (int): ";
    cin >> battery;

    cout << "Enter charging (1 = yes, 0 = no): ";
    cin >> charging;

    cout << "battery < 20: " << (battery < 20) << endl;
    cout << "battery < 20 && !charging: " << (battery < 20 && !charging) << endl;
    cout << "battery == 100 || charging: " << (battery == 100 || charging) << endl;
    cout << "battery >= 0 && battery <= 100: " << (battery >= 0 && battery <= 100) << endl;
    cout << "0 <= battery <= 100: " << (0 <= battery <= 100) << endl; //trap

    return 0;
}