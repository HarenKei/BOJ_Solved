#include <bits/stdc++.h>
#define MAX 1000001

using namespace std;

void eratos(int n, int m){
    bool primeArray[MAX];

    for(int i = 2; i <= m; i++){
        primeArray[i] = true;
    }

    for(int i = 2; i * i <= m; i++){
        if(primeArray[i]){
            for(int j = i * i; j <= m; j += i){
                primeArray[j] = false;
            }
        }
    }

    for(int i = n; i <= m; i++){
        if(primeArray[i]){
            cout << i << "\n";
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    cin >> n >> m;

    eratos(n, m);


    return 0;
}