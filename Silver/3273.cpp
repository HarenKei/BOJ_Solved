#include<bits/stdc++.h>

using namespace std;

int n, x, ans = 0;
vector<int> v;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n;

    for(int i = 0; i < n; i++) {
        int num;
        cin >> num;
        v.push_back(num);
    }

    cin >> x;

    sort(v.begin(), v.end());

    int s = 0, e = n - 1;

    while(s < e) {
        if(v[s] + v[e] == x) {
            ans++;
            s++;
            e--;
        } else if(v[s] + v[e] < x) {
            s++;
        } else {
            e--;
        }
    }

    cout << ans << "\n";

    return 0;
}
