#include <bits/stdc++.h>
#define MAX 15

using namespace std;

int t;
int apt[MAX][MAX];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    for(int i = 0; i <MAX; i++){
            apt[0][i] = i;
        }

    for(int i = 1; i < MAX; i++){
        for(int j = 1; j < MAX; j++){
            for(int k = 1; k <= j; k++){
                apt[i][j] += apt[i-1][k];
            }
        }
    }

    cin >> t;

    while(t--){
        int k, n;
        cin >> k >> n;
        cout << apt[k][n] << '\n';        
    }

    return 0;
}