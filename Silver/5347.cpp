#include <bits/stdc++.h>

using namespace std;

int t;

long long GCD(long long a, long long b){
    if(b == 0)
        return a;
    else
        return GCD(b, a%b);
}

long long LCM(long long a, long long b){
    return (a * b) / GCD(a, b);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        long long lcm = LCM(a, b);
        cout << lcm << '\n';
    }

    return 0;
    

}