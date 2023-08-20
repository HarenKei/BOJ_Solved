#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    int a = 0, c = 0;

    for(int i = 1; i <= n; i++) {
        a += i;
        c += (i * i * i);
    }

    cout << a << "\n" << a * a << "\n" << c << "\n";

    return 0;
}
