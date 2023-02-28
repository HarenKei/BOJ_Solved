#include <bits/stdc++.h>
#define MAX 1004001

using namespace std;

bool visited[MAX];

bool chkPal(int n){
    string num = to_string(n);

    for(int i = 0; i < num.size() / 2; i++){
        if(num[i] != num[num.size() - 1 - i]){
            return false;
        }
    }
    return true;
}

void primeNum(){
    memset(visited, true, sizeof(visited));
    visited[1] = false;

    for(int i = 2; i * i < MAX; i++){
        if(!visited[i]) continue;
        for(int j = i + i; j < MAX; j+= i){
            visited[j] = false;
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    primeNum();

    for(int i = n; ;i++){
        if(!visited[i]) continue;
        if(chkPal(i)) {
            cout << i << "\n";
            return 0;
        }
    }


    return 0;
}