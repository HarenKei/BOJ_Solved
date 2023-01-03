#include <bits/stdc++.h>
#define A 300
#define B 60
#define C 10

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b, c, d;
    cin >> a >> b >> c;
    cin >> d;

    c += d;
    b += c / 60;
    a += b / 60;

    cout << a % 24 << " " << b % 60 << " " << c % 60;

    return 0;
}