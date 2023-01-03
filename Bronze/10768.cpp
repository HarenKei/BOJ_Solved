#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int month, day;
    string ans;
    cin >> month;
    cin >> day;

    if(month == 2){
        if(day == 18) ans = "Special";
        else if(day < 18) ans = "Before";
        else ans = "After";
    } else if(month > 2){
        ans = "After";
    } else ans = "Before";

    cout << ans << '\n';

    return 0;
}