#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;

    cin >> t;

    for(int i = 1; i <= t; i++) {
        int n;
        int res = 0;
        cin >> n;

        vector<int> house(n + 1);

        for(int j = 0; j < n; j++) {
            cin >> house[j];
        }

        for(int j = 1; j < n; j++) {
            if(house[j - 1] >= house[j]) {
                res++;
            }
        }

        cout << "Case #" << i << ": " << res << "\n";
    }

    return 0;
}
