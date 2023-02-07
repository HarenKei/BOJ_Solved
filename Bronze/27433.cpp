#include <bits/stdc++.h>
#define MAX 200000

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    long long result = 1;

    for(int i = n; i > 0; i--){
        result *= i;
    }

    cout << result << "\n";

    return 0;
}