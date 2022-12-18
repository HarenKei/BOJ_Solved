#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    while(1){
        int m, f;
        cin >> m >> f;

        if(m == 0 && f == 0){
            return 0;
        } else {
            cout << m + f << '\n';
        }
    }
    return 0;
}