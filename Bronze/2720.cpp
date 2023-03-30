#include <bits/stdc++.h>

using namespace std;



int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int quarter = 25, dime = 10, nickel = 5, penny = 1;
    int t;
    cin >> t;

    while(t--) {
        int cash;
        int q, d, n, p;

        cin >> cash;
        
        q = cash / quarter;
        cash %= quarter;

        d = cash / dime;
        cash %= dime;

        n = cash / nickel;
        cash %= nickel;

        p = cash / penny;

        cout << q << " " << d << " " << n << " " << p << "\n";
    }

    return 0;
} 