#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int d1, d2;
    float pi = 3.141592;

    cin >> d1 >> d2;

    cout << fixed;
    cout.precision(6);

    cout << d1 * 2 + 2 * pi * d2;

    return 0;
}
