#include <bits/stdc++.h>

using namespace std;

string jh;
string dr;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> jh >> dr;

    if(jh.length() >= dr.length()){
        cout << "go" << '\n';
    } else{
        cout << "no" << '\n';
    }

    return 0;
}