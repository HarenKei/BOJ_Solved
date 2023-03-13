#include <bits/stdc++.h>

using namespace std;

int eratos(int n){
    bool primeArray[(n * 2) + 1];
    int cnt = 0;

    for(int i = 2; i <= n * 2; i++){
        primeArray[i] = true;
    }

    for(int i = 2; i * i <= n * 2; i++){
        if(primeArray[i]){
            for(int j = i * i; j <= n * 2; j += i){
                primeArray[j] = false;
            }
        }
    }

    for(int i = n + 1; i <= (n * 2); i++){
        if(primeArray[i]){
            cnt++;
        }
    }

    return cnt;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    while(1){
        int n;
        cin >> n;

        if(n == 0) break;

        cout << eratos(n) << "\n";
    }


    return 0;
}