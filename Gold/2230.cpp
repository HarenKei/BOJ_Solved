#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m, s = 0, e = 0, diff = 0, ans = 2100000000;
    vector<int> v;

    cin >> n >> m;

    for(int i = 0; i < n; i++) {
        int input;
        cin >> input;
        v.push_back(input);
    }

    sort(v.begin(), v.end());

    while(s < n && e < n) {
        diff = v[e] - v[s];

        if(diff >= m) {
            s++;
            ans = min(diff, ans);
        } else {
            e++;
        }
    }

    cout << ans << "\n";

    return 0;
}
