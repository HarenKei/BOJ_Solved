#include <bits/stdc++.h>

using namespace std;

int n, cnt;

void Solution(int num){
    int hun = num / 100;
    int ten = num % 100 / 10;
    int one = num % 10;
    
    if((hun - ten) == (ten - one)) cnt++;
    
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> n;

    if(n >= 1 && n < 100){
        cout << n << '\n';
        return 0;
    } else if(n >= 100 && n <= 1000){
        cnt = 99;
        for(int i = 100; i <= n; i++){
            Solution(i);
        }
    }

    cout << cnt << '\n';

    return 0;
}