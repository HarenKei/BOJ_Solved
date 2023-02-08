#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t, s;
    cin >> t >> s;

    if(t >= 12 && t <= 16){
        //점심시간
        if(s == 1){
            //술과 함께
            cout << 280 << "\n";
            return 0;
        } else {
            cout << 320 << "\n";
            return 0;
        }
    } else {
        //아침 or 저녁
        cout << 280 << "\n";
        return 0;
    }

    return 0;
}