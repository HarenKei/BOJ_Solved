#include <bits/stdc++.h>

using namespace std;

int n;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;


    cout << int(n * 0.78) << " " << int(n - (n * 0.2 * 0.22)) << '\n';

    return 0;
}