#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int a, b;
    cin >> a >> b;

    int ra = (a + b) / 2;
    int rb = (a - b) / 2;

    if(((a + b) % 2 != 0 || (a - b) % 2 != 0)) {
        cout << -1 << "\n";
    } else {
        if(ra < 0 || rb < 0) {
            cout << -1 << "\n";
        } else {
            if(ra >= rb) {
                cout << ra << " " << rb << "\n";
            } else {
                cout << rb << " " << ra << "\n";
            }
        }
    }

    return 0;
}
