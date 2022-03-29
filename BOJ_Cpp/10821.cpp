#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string str;
    int cnt = 1;
    cin >> str;

    for(int i = 0; i < str.size(); i++){
        if(str[i] == ',')
            cnt++;
    }

    cout << cnt << endl;

    return 0;
}
