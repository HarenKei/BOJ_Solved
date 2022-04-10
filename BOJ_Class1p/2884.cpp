#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int h, m;
    cin >> h >> m;

    if(m >= 45){
        cout << h << " " << m - 45 << endl;
    } else if(m < 45 && h > 0){
        cout << h -1 << " " << m + 60 - 45 << endl;
    } else if(m < 45 && h == 0){
        cout << h+24 -1 << " " << m + 60 -45 << endl;
    }
    return 0;
}