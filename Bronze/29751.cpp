#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    float w, h;
    float ans;

    cin >> w >> h;

    ans = (w * h) / 2;

    cout << fixed;
    cout.precision(1);
    cout << ans << "\n";

    return 0;
}
