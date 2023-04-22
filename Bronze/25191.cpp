#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int ck, cola, beer;

    cin >> ck;
    cin >> cola >> beer;

    if(ck >= (cola / 2 + beer)) {
        cout << (cola / 2 + beer) << "\n";
    } else {
        cout << ck << "\n";
    }

    return 0;
}