#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, s;
    vector<int> cow;
    cin >> n >> s;

    for(int i = 0; i < n; i++) {
        int input;
        cin >> input;
        cow.push_back(input);
    }

    sort(cow.begin(), cow.end());

    int ans = 0;

    for(int i = 0; i < cow.size(); i++) {
        for(int j = i + 1; j < cow.size(); j++) {
            if(cow[i] + cow[j] <= s) {
                ans++;
            }
        }
    }

    cout << ans << "\n";

    return 0;
}
