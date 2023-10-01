#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    string s = "WelcomeToSMUPC";

    cin >> n;

    if(n > 14) {
        string tmpStr;

        for(int i = 0; i < n; i++) {
            tmpStr += s;
        }

        cout << tmpStr[n - 1] << "\n";

    } else {
        cout << s[n - 1] << "\n";
    }


    return 0;
}
