#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, cnt = 0;
    string jinho;
    cin >> jinho >> n;

    while(n--) {
        string mbti;
        cin >> mbti;

        if(jinho == mbti) cnt++;
    }

    cout << cnt << "\n";

    return 0;
}