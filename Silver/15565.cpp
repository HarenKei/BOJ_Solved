#include <bits/stdc++.h>

using namespace std;

int n, k, ans = 999999;
int sum = 0;
vector<int> lion;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> k;

    for(int i = 1; i <= n; i++) {
        int doll;
        cin >> doll;

        if(doll == 1) lion.push_back(i);
    }

    if(lion.size() < k) {
        cout << -1 << "\n";
        return 0;
    }

    for(int i = 0; i <= lion.size() - k; i++) {
        ans = min(lion[i + k - 1] - lion[i] + 1 , ans);
    }

    cout << ans << "\n";

    return 0;
}