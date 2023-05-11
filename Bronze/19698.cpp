#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, w, h, l;
    cin >> n >> w >> h >> l;

    int result = ((w / l) * (h / l)) <= n ? (w / l) * (h / l) : n;

    cout << result << "\n";

    return 0;
}