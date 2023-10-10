#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    long long ans = 9876543210;
    vector<pair<long long, long long>> v;
    vector<long long> sum;

    cin >> n;

    for(int i = 0; i < n; i++) {
        long long x, a;
        cin >> x >> a;
        v.push_back({x, a});
    }

    sort(v.begin(), v.end());
    sum.push_back(v[0].second);

    for(int i = 1; i < n; i++) {
        sum.push_back(sum[i - 1] + v[i].second);
    }

    long long s = 0, e = n - 1;

    while(s <= e) {
        long long mid = (s + e) / 2;
        long long lSum = sum[mid];
        long long rSum = sum[n - 1] - sum[mid];

        if(lSum >= rSum) {
            e = mid - 1;
            ans = min(ans, v[mid].first);
        } else{
            s = mid + 1;
        };
    }

    cout << ans << "\n";


    return 0;
}
