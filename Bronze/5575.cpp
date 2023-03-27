#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    //전부 초로 변환
    // 시간 * 3600 분 * 60

    for(int i = 0; i < 3; i++) {
        int sh, sm, ss, eh, em, es;
        int st, et, time;
        int h, m, s;

        cin >> sh >> sm >> ss >> eh >> em >> es;

        st = (sh * 3600) + (sm * 60) + ss;
        et = (eh * 3600) + (em * 60) + es;
        time = et - st;

        h = time / 3600;
        m = (time % 3600) / 60;
        s = (time % 3600) % 60;

        cout << h << " " << m << " " << s << "\n";
    }


    return 0;
}