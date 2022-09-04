#include <bits/stdc++.h>

using namespace std;

int n;
int cnt;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> n;

    for(int i = 666; ; i++){
        string tmp = to_string(i);
        for(int j = 0; j < tmp.length(); j++){
            if(tmp[j] == '6' && tmp[j+1] == '6' && tmp[j+2] == '6'){
                cnt++;
                break;
            }
        }

        if(cnt == n){
            cout << i << '\n';
            break;
        }
    }

    return 0;
}