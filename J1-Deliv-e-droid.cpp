#include <iostream>
using namespace std;

int main() {
    int x;
    int y;
    int total = 0;
    
    cin >> x;
    cin >> y;
    
    if (x > y) {
        total += 500;
    }
    
    total += (x * 50);
    total -= (y * 10);
    
    cout << total;
    return 0;
}
