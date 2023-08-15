#include <bits/stdc++.h>

using namespace std;

int h, i, a, r, c;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> h >> i >> a >> r >> c;

    cout << (h * i) - (a * r * c) << "\n";

 
    return 0;
}