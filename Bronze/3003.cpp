#include <bits/stdc++.h>

using namespace std;

int chess[6] = {1, 1, 2, 2, 2, 8};
int dhInput[6];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    for(int i = 0; i < 6; i++) cin >> dhInput[i];

    for(int i = 0; i < 6; i++){
        cout << chess[i] - dhInput[i] << " ";
    }


    return 0;
}