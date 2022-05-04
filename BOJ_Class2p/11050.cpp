#include <bits/stdc++.h>

using namespace std;

int Facto(int n){
    int result = 1;
    for(int i = n; i > 0; i--){
        result *= i;
    }
    return result;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, k, result;
    cin >> n >> k;

    result = Facto(n) / (Facto(k) * Facto(n-k));
    
    cout << result << '\n';

    return 0;
}