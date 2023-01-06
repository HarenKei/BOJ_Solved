#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string target;
    cin >> target;

    int n, cnt = 0;
    cin >> n;

    while(n--){
        string str;
        cin >> str;

        str += str;

        if(str.find(target) != string::npos){
            cnt++;
        }
    }

    cout << cnt << "\n";

    
    return 0;
}