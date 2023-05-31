#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        int n, k, sum = 0, ans = 0, mini = 987654321;
        vector<int> v;
        cin >> n >> k;

        for(int i = 0; i < n; i++) {
            int input;
            cin >> input;
            v.push_back(input);
        }

        sort(v.begin(), v.end());

        int s = 0, e = v.size() - 1;

        while(s < e) {
            sum = v[s] + v[e];

            if(sum == k) {
                s++;
                e--;
            } else if(sum > k) {
                e--;
            } else {
                s++;
            }

            if(abs(k - sum) < mini) {
                mini = min(abs(k - sum), mini);
                ans = 1;
            } else if(abs(k - sum) == mini) {
                ans++;
            }
        }

        cout << ans << "\n";
    }

    return 0;
}
