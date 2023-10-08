#include <bits/stdc++.h>

using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int mx, ml;
    int t1, e1, f1, t2, e2, f2;

    cin >> t1 >> e1 >> f1 >> t2 >> e2 >> f2;

    mx = (t1 * 3) + (e1 * 20) + (f1 * 120);
    ml = (t2 * 3) + (e2 * 20) + (f2 * 120);

    if(mx > ml) {
        cout << "Max\n";
    } else if(ml > mx) {
        cout << "Mel\n";
    } else {
        cout << "Draw\n";
    }

    return 0;
}