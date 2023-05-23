#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    //뉴비 : 1학년 혹은 2학년
    //올드비 : n학년 이하 뉴비가 아닌 학생
    //TLE : 뉴비도 아니고 올드비도 아닌 학생

    int n, m;
    bool newbie = false;
    bool oldbie = false;

    cin >> n >> m;

    if(m == 1 || m == 2) newbie = true;

    if(m <= n && !newbie) oldbie = true;

    if(!newbie && !oldbie) {
        cout << "TLE!\n";
    } else if(newbie && !oldbie) {
        cout << "NEWBIE!\n";
    } else {
        cout << "OLDBIE!\n";
    }

    return 0;
}