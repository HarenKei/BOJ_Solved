#include <bits/stdc++.h>

using namespace std;

bool isPal(string num){
    string start = num;
    reverse(num.begin(), num.end());
    string back = num;

    if(start == back) return true;
    else return false;
}

bool isPrime(int num){
    if(num < 2) return false;

    for(int i = 2; i <= sqrt(num); i++){
        if(num % i == 0) return false;
    }

    return true;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b;
    cin >> a >> b;

    for(int i = a; i <= 10000000; i++){
        if(i > b) break;
        
        if(isPal(to_string(i)) && isPrime(i)){
            cout << i << "\n";
        }
    }

    cout << -1;

    return 0;
}