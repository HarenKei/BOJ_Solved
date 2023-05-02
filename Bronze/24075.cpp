#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b;
    cin >> a >> b;

    int maxResult = max((a + b), (a - b));
    int minResult = min((a + b), (a - b));

    cout << maxResult << "\n";
    cout << minResult << "\n";

    return 0;
}