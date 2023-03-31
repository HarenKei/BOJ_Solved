#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int cnt = 0;

    while(1) {
        int l, p, v, ans = 0;
        cin >> l >> p >> v;
        cnt++;

        if(l == 0 && p == 0 && v == 0) break;

        ans += (v / p) * l;

        if(v % p <= l) ans += v % p;
        else ans += l;

        cout << "Case " << cnt << ": " << ans << "\n";
        
    }
    return 0;
} 