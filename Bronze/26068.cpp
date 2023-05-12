#include <bits/stdc++.h>

using namespace std;  


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, ans = 0;
    cin >> n;

    while(n--) {
        string str;
        cin >> str;

        if(stoi(str.substr(2)) <= 90) ans++;
    }

    cout << ans << "\n";


    return 0;
}