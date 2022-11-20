#include <bits/stdc++.h>

using namespace std;

string str = "long";
string ans = "";
int n;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;

    for(int i = 0; i < (n / 4); i++){
        ans += str + " ";
    }

    cout << ans + "int" << '\n';
    
    return 0;
}