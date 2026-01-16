#include <bits/stdc++.h>
using namespace std;

int main() {
    int m;
    cin >> m;              // visibility in meters

    int km = m / 1000;     // integer kilometers
    int vv;

    if (m < 100) {
        vv = 0;
    }
    else if (m <= 5000) {
        vv = m / 100;
    }
    else if (m <= 30000) {
        vv = km + 50;
    }
    else if (m <= 70000) {
        vv = (km - 30) / 5 + 80;
    }
    else {
        vv = 89;
    }

    // print as two digits with leading zero if needed
    cout << setw(2) << setfill('0') << vv << '\n';

    return 0;
}
