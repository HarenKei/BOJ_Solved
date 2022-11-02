#include <bits/stdc++.h>

using namespace std;

int dis;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> dis;

    if(dis % 5 != 0){
        cout << (dis / 5) + 1 << '\n';
    } else{
        cout << dis / 5 << '\n';
    }
    

    return 0;
}