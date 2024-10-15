#include <iostream>
using namespace std;

int main() {
    int total = 0;
    string x;
    int y;
    cin >> y;
    
    for (int i = 0; i < y; i++) {
        cin >> x;
        if (x == "Poblano") {
            total += 1500;
        } else if (x == "Mirasol") {
            total += 6000;
        } else if (x == "Serrano") {
            total += 15500;
        } else if (x == "Cayenne") {
            total += 40000;
        } else if (x == "Thai") {
            total += 75000;
        } else if (x == "Habanero") {
            total += 125000;
        }
    }
    
    cout << total;
    return 0;
}
