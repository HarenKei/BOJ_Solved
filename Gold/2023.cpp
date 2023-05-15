#include <bits/stdc++.h>

using namespace std;

int n;
int start[4] = {2, 3, 5, 7};
int tmpNum;

bool prime(int n) {
    if(n < 2) return false;
    for(int i = 2; i <= sqrt(n); i++) {
        if(n % i == 0) {
            return false;
        }
    }
    return true;
}

void DFS(int num, int depth) {
    if(depth == 0) cout << num << "\n";

    else {
        for(int i = 1; i < 10; i += 2) {
            int tmp = num * 10 + i;

            if(prime(tmp)) {
                DFS(tmp, depth - 1);
            }
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;

    for(int i = 0; i < 4; i++) {
        DFS(start[i], n - 1);
    }

    return 0;
}