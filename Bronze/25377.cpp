#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, a, b, time = 987654321;

    cin >> n;

    while(n--) {
        cin >> a >> b;

        if(a <= b && b < time) {
            time = b;
        }
    }

    if(time == 987654321) {
        cout << -1 << "\n";
    } else {
        cout << time << "\n";
    }
    return 0;
}
