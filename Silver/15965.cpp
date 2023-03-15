#include <bits/stdc++.h>
#define MAX 7500000

using namespace std;


bool primeNum[MAX];

void eratos(){
    for(int i = 2; i <= MAX; i++){
        primeNum[i] = true;
    }

    for(int i = 2; i * i <= MAX; i++){
        if(primeNum[i]){
            for(int j = i * i; j <= MAX; j += i){
                primeNum[j] = false;
            }
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int k;
    vector<int> prime;

    cin >> k;

    eratos();

    for(int i = 2; i <= MAX; i++){
        if(primeNum[i]){
            prime.push_back(i);
        }
    }

    cout << prime[k - 1] << "\n";

    return 0;
}