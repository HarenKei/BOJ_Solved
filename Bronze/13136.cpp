#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long r, c, n;
    long long x, y;

    cin >> r >> c >> n;

    if(r % n != 0) {
        y = r / n + 1;
    } else {
        y = r / n;
    }

    if(c % n != 0) {
        x = c / n + 1;
    } else {
        x = c / n;
    }

    cout << x * y << "\n";



    return 0;
}
