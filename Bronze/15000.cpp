#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;
    string ans = "";

    cin >> s;

    for(int i = 0; i < s.length(); i++) {
        ans += s[i] - 32;
    }

    cout << ans << "\n";

    return 0;
}
