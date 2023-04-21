#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int y1, m1, d1, y2, m2, d2, y, yy, yyy;

    cin >> y1 >> m1 >> d1;
    cin >> y2 >> m2 >> d2;

    if(m1 < m2) {
        y = y2 - y1;
    } else if(m1 == m2 && d1 <= d2) {
        y = y2 - y1;
    } else{
        y = y2 - y1 - 1;
    }

    yy = y2 - y1 + 1;
    yyy = y2 - y1;

    cout << y << "\n" << yy << "\n" << yyy <<"\n";


    return 0;
}