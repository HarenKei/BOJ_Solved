#include <bits/stdc++.h>

using namespace std;

string str;
int one = 0, zero = 0;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> str;

    if(str[0] == '1') one++;
    else zero++;

    for(int i = 1; i < str.length(); i++){
        if(str[i+1] != str[i]){ //0 또는 1이 연속되지 않는 경우
            if(str[i] == '1') one++;
            else zero++;
        }
    }

    cout << min(one, zero);

    return 0;
}