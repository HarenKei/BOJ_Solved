#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    int result = 1;
    cin >> n;

    for(int i = n; i > 0; i--){
        result *= i;
    }

    cout << result;

    return 0;
}