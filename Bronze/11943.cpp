#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int result = (a + d) <= (b + c) ? (a + d) : (b + c);

    cout << result << "\n";

    return 0;
}