#include <iostream>
using namespace std;

int main() {
    int rows = 0;
    string row;
    int day[5] = {0, 0, 0, 0, 0};
    int max = 0;
    string highest;
    cin >> rows;
    
    for (int i = 0; i < rows; i++) {
        cin >> row;
        for (int j = 0; j < 5; j++) {
            if (row[j] == 'Y') {
               day[j] += 1;
            }
        }
    }
    
    for (int k = 0; k < 5; k++) {
        if (day[k] > max) {
            highest = to_string(k+1);
            max = day[k];
        } else if (day[k] == max && k != 5) {
            highest += ",";
            highest += to_string(k+1);
        } else if (day[k] == max) {
            highest += to_string(k+1);
        }
    }
    
    cout << highest;

    return 0;
}
