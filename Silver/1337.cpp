#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, ans = 987654321;
    vector<int> v;
    cin >> n;

    for(int i = 0; i < n; i++) {
        int num;
        cin >> num;
        v.push_back(num);
    }

    sort(v.begin(), v.end());

    for(int i = 0; i < v.size(); i++) {
        int cnt = 0;
        vector<int> tmp(5);

        for(int j = 0; j < 5; j++) {
            tmp[j] = v[i] + j;
        }

        int k = i;

        for(int j = 0; j < 5; j++) {
            if(v[k] == tmp[j] && k < v.size()) {
                k++;
                cnt++;
            }

        }
        ans = min(ans, 5 - cnt);
    }

    cout << ans << "\n";

    return 0;
}
