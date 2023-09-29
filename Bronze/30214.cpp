#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int s1, s2;
    cin >> s1 >> s2;

    if(s1 * 2 >= s2) {
        cout << "E\n";
    } else {
        cout << "H\n";
    }

    return 0;
}
