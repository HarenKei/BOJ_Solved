#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, sum = 0;
    cin >> n;

    while(n--){
        int input;
        cin >> input;
        sum += input;
    }

    cout << sum << "\n";

    
    return 0;
}