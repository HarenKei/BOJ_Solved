#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string input;
    getline(cin, input);

    int a = input[0] - '0';
    int b = input[4] - '0';
    int result = input[8] - '0';

    cout << (a + b == result ? "YES\n" : "NO\n");
    
    return 0;
}