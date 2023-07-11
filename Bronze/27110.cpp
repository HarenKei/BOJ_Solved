#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, ans = 0;
    vector<int> chk(3);

    cin >> n;

    for(int i = 0; i < 3; i++) {
        cin >> chk[i];
    }

    for(auto it = chk.begin(); it != chk.end(); it++) {
        if(*it <= n) {
            ans += *it;
        } else {
            ans += n;
        }
    }

    cout << ans << "\n";

    return 0;
}
