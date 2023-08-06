#include<bits/stdc++.h>

using namespace std;

int n;
int ans = 1;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n;

    while(n--) {
        ans *= 2;
    }

    cout << ans << "\n";
    return 0;
}
