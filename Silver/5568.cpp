#include<bits/stdc++.h>

using namespace std;

int n, k;
int card[11];
bool visited[11];
set<string> tmp;

void DFS(string number, int depth) {
    if(depth == k) {
        tmp.insert(number);
        return;
    } else {
        for(int i = 0; i < n; i++) {
            if(!visited[i]) {
                visited[i] = true;
                DFS(number + to_string(card[i]), depth + 1);
                visited[i] = false;
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> k;

    for(int i = 0; i < n; i++) {
        cin >> card[i];
    }

    DFS(to_string(card[0]), 0);

    cout << tmp.size() << "\n";

    return 0;
}
