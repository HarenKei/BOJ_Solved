#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int s, k, h;

    cin >> s >> k >> h;

    if(s + k + h < 100) {
        int minNum = min(s, min(k, h));

        if(minNum == s) {
            cout << "Soongsil\n";
        } else if(minNum == k) {
            cout << "Korea\n";
        } else if(minNum == h) {
            cout << "Hanyang\n";
        }
    } else {
        cout << "OK\n";
    }
    
    return 0;
}