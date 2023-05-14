#include <bits/stdc++.h>

using namespace std;  

void star(int num) {
    for(int i = 1; i <= num; i++) {
        for(int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << "\n";
    }
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    while(1) {
        int n;
        cin >> n;
        
        if(n == 0) break;

        star(n);
    }

    return 0;
}