#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    vector<pair<int, int>> v;
    cin >> n;

    for(int i = 0; i < n; i++) {
        int d, t;
        cin >> d >> t;
        v.push_back({t,d});
    }

    sort(v.begin(), v.end(), greater<pair<int,int>>());

    int tmp = v[0].first - v[0].second;

    for(int i = 1; i < v.size(); i++) {
        int d = v[i].second;
        int t = v[i].first;

        if(tmp >= t) {
            tmp = t - d;
        } else {
            tmp -= d;
        }
    }

    cout << tmp << "\n";


    return 0;
}
