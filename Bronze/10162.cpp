#include <bits/stdc++.h>
#define A 300
#define B 60
#define C 10

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    if(t % 10 != 0) {
        cout << -1 << "\n";
        return 0;
    }

    cout << (t / A) << " ";
    cout << (t % A) / B << " ";
    cout << ((t % A) % B) / C << " \n";


    return 0;
}