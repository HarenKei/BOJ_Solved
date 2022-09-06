#include <bits/stdc++.h>

using namespace std;

int diceA, diceB, diceC;
int ans;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> diceA >> diceB >> diceC;

    if(diceA == diceB && diceB == diceC){
        cout << 10000 + diceA * 1000 << '\n';
    } else if(diceA == diceB || diceA == diceC){
        cout << 1000 + diceA * 100 << '\n';
    } else if(diceB == diceC){
        cout << 1000 + diceB * 100 << '\n';
    }else{
        cout << max(max(diceA, diceB), diceC) * 100 << '\n';
    }

    return 0;
}