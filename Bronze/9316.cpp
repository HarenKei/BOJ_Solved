#include <bits/stdc++.h>

using namespace std;

string result = "Hello World, Judge ";

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    for(int i = 1; i <= n; i++){
        cout << result << i <<"!\n";
    }

    return 0;
}