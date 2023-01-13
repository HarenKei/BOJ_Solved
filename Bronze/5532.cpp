#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int l, a, b, c, d;
    int kor, mat;

    cin >> l >> a >> b >> c >> d;

    kor = a % c != 0 ? (a / c) + 1 : a / c;
    mat = b % d != 0 ? (b / d) + 1 : b / d;

    cout << l - (kor > mat ? kor : mat) << "\n";
    
    return 0;
}