#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, res = 0;
    cin >> n;

    for(int i = 0; i < n; i++) {
        int num;
        cin >> num;
        res += num;
    }

    if(res < 0) {
        cout << "Left\n";
    } else if(res > 0) {
        cout << "Right\n";
    } else {
        cout << "Stay\n";
    }

    return 0;
}
