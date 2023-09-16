#include <bits/stdc++.h>

using namespace std;

int s, e;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> s >> e;

    if(s >= 20 && s <= 23) {
        cout << (24 - s) + e << "\n";
    } else if(s >= 0 && s <= 3) {
        cout << e - s << "\n";
    }

    return 0;
}
