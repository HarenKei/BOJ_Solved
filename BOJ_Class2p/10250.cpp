#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    for(int i = 0; i < t; i++){
        int w, h, n;
        int x, y;
        cin >> h >> w >> n;

        x = n % h;
        y = n / h;

        if(x > 0)
            y++;
        else
            x = h;

        cout << (x * 100) + y << endl;
    }
    return 0;
}