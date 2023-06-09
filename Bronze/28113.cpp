#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, a, b;
    cin >> n >> a >> b;

    if(a < b && a < n + a) {
        cout << "Bus\n";
    } else if(a > b && b < n + a) {
        cout << "Subway\n";
    } else {
        cout << "Anything\n";
    }

    return 0;
}
