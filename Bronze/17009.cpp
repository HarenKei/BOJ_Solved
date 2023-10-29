#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int a3, a2, a1;
    int b3, b2, b1;

    cin >> a3 >> a2 >> a1;
    cin >> b3 >> b2 >> b1;

    if((a3 * 3) + (a2 * 2) + a1 > (b3 * 3) + (b2 * 2) + b1) {
        cout << "A\n";
    } else if ((a3 * 3) + (a2 * 2) + a1 < (b3 * 3) + (b2 * 2) + b1) {
        cout << "B\n";
    } else {
        cout << "T\n";
    }

    return 0;
}
