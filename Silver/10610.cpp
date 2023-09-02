#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string n;
    long long sum = 0;

    cin >> n;

    sort(n.begin(), n.end(), greater<>());

    if(*(n.end() - 1) != '0') {
        cout << -1 << "\n";
        return 0;
    }

    for(char i : n) {
        sum += i - '0';
    }

    if(sum % 3 == 0) {
        cout << n << "\n";
    } else {
        cout << -1 << "\n";
    }


    return 0;
}
