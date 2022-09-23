#include <bits/stdc++.h>

using namespace std;

int m, n;
int minVal = -1;
int sum;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> m >> n;

    for(int i = m; i <= n; i++){
        int j;

        if(i == 0 || i == 1) continue;

        for(j = 2; j <= i; j++){
            if(i % j == 0) break;
        }

        if(i == j){
            if(minVal == -1) minVal = i;
            sum += i;
        }
    } 

    if(minVal != -1){
        cout << sum << '\n' << minVal << '\n';
    } else cout << minVal << '\n';

    return 0;
    

}