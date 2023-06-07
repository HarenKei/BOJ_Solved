#include <bits/stdc++.h>

using namespace std;

long long int a, b, c;
int ans = 0;

long long int pow(long long int num1, long long int num2) {
    if(num2 == 0){
        return 1;
    } else if(num2 == 1) {
        return num1;
    }

    if(num2 % 2 > 0) {
        return pow(num1, num2 - 1) * num1;

    }

    long long int half = pow(num1, num2/2);
    half %= c;

    return (half * half) % c;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> a >> b >> c;

    cout << pow(a, b) % c << "\n";



    return 0;
}
