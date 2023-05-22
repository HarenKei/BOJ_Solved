#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, k,sum = 0, ans = -9999999;
    vector<int> v;
    cin >> n >> k;

    for(int i = 0; i < n; i++) {
        int input;
        cin >> input;
        v.push_back(input);
    }

    for(int i = 0; i < k; i++) {
        sum += v[i];
    }

    for(int i = k; i < n; i++ ) {
        sum += v[i] - v[i - k];
        ans = max(ans, sum);
    }

    cout << ans << "\n";



    return 0;
}