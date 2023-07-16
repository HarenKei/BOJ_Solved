#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int k, w, m, ans = 0;
    cin >> k >> w >> m;

    while(k < w) {
        k += m;
        ans++;
    }

    cout << ans << "\n";

    return 0;
}
