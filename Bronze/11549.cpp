#include<bits/stdc++.h>

using namespace std;

int t, ans = 0;
int arr[6];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> t;

    for(int i = 0; i < 5; i++) {
        cin >> arr[i];
        if(arr[i] == t) ans++;
    }

    cout << ans << "\n";

    return 0;
}
