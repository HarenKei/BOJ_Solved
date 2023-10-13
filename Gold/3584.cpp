#include <bits/stdc++.h>

using namespace std;

int t, n, node1, node2, a, b;
int nodeParent[10001];
bool visited[10001] = {false,};


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> t;

    while(t--) {
        cin >> n;

        for(int i = 1; i <= n; i++) {
            visited[i] = false;
            nodeParent[i] = i;
        }



        for(int i = 0; i < n - 1; i++) {
            cin >> a >> b;
            nodeParent[b] = a;
        }

        cin >> node1 >> node2;

        visited[node1] = true;

        while(nodeParent[node1] != node1) {
            node1 = nodeParent[node1];
            visited[node1] = true;
        }

        while(1) {
            if(visited[node2]) {
                cout << node2 << "\n";
                break;
            } else {
                node2 = nodeParent[node2];
            }
        }


    }

    return 0;
}
