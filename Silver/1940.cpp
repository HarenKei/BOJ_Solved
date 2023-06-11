#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m, s, e, sum = 0, ans = 0;
    vector<int> v;

    cin >> n >> m;

    s = 0;
    e = n - 1;

    for(int i = 0; i < n; i++) {
        int num;
        cin >> num;
        v.push_back(num);
    }

    sort(v.begin(), v.end());

    while(s < e) {
        sum = v[s] + v[e];

        if(sum == m) {
            s++;
            e--;
            ans++;
        } else if(sum < m) {
            s++;
        } else {
            e--;
        }
    }

    cout << ans << "\n";

    return 0;
}
