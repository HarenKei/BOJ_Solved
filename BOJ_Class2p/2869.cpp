#include <bits/stdc++.h>

using namespace std;

int a, b, v;
int ans = 1;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> a >> b >> v;
    ans += ((v - a) % (a - b) == 0) ? (v - a) / (a - b) : ((v - a) / (a - b)) + 1;

    cout << ans << endl;

    return 0;
}