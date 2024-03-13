#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int x[4], y[4];

        // Read coordinates
        for (int i = 0; i < 4; i++)
            cin >> x[i] >> y[i];

        // Find side length
        int side = max(abs(x[0] - x[1]), abs(y[0] - y[1]));

        // Output area
        cout << side * side << '\n';
    }

    return 0;
}
