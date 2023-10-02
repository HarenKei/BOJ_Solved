#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, cnt1 = 0, cnt2 = 0;

    cin >> n;

    for(int i = 0; i < n; i++) {
        int input;
        cin >> input;

        if(input % 2 == 0) cnt1++;
        else cnt2++;
    }

    if(cnt1 > cnt2) cout << "Happy\n";
    else cout << "Sad\n";

    return 0;
}
