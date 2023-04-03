#include <bits/stdc++.h>

using namespace std;

long long GCD(long long a, long long b){
    return (b == 0 ? a : GCD(b, a % b));
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    long long a, b;
    cin >> a >> b;

    long long result = a >= b ? GCD(a, b) : GCD(b, a);

    while(result--) {
        cout << "1";
    }
    cout << "\n";



    return 0;
}