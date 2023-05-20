#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int limit, speed, fee, tmp;
    cin >> limit >> speed;

    tmp = speed - limit;

    if(tmp >= 1 && tmp <= 20) {
        cout << "You are speeding and your fine is $100.";
    } else if(tmp >= 21 && tmp <= 30) {
        cout << "You are speeding and your fine is $270.";
    } else if(tmp >= 31) {
        cout << "You are speeding and your fine is $500.";
    } else {
       cout << "Congratulations, you are within the speed limit!\n";
    }

    return 0;
}