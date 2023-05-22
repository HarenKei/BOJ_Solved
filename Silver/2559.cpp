#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, k,ans = -10000001;
    vector<int> v;
    cin >> n >> k;

    v.push_back(0);
    for(int i = 1; i <= n; i++) {
        int input;
        cin >> input;
        v.push_back(v[i - 1] + input);
    }

    for(int i = k; i <= n; i++ ) {
        ans = max(ans, v[i]- v[i - k]);
    }

    cout << ans << "\n";



    return 0;
}