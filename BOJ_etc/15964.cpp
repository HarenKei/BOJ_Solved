#include <bits/stdc++.h>

using namespace std;

void cal(long long x, long long y){
    long long plus = x + y;
    long long minus = x - y;
    cout << plus * minus << '\n';
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long a, b;

    cin >> a >> b;
   
    cal(a, b);

    return 0;
}