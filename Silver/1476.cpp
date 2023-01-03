#include <bits/stdc++.h>
#define E 15
#define S 28
#define M 19

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int e, s, m;
    cin >> e >> s >> m;

    int cnt = 1;

    while(1){

        if((cnt - e) % E == 0 & (cnt - s) % S == 0 & (cnt - m) % M == 0){
            cout << cnt << '\n';
            return 0;
        } else {
            cnt++;
        }
    }

    return 0;
}