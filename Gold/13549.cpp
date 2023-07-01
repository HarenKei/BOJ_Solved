#include<bits/stdc++.h>
#define INF 987654321
#define MAX 100001

using namespace std;

int n, k;
int dist[MAX];
queue<int> q;

void dijkstra(int start, int end) {
   q.push(start);
   dist[start] = 0;

   while(!q.empty()) {
       int curNode = q.front();
       q.pop();

       if(curNode == end) {
           cout << dist[end] << "\n";
           break;
       }

       for(int i = 0; i < 3; i++) {
           int nxtNode;
           int nxtCost;

           if(i == 0) {
               nxtNode = curNode * 2;
               nxtCost = 0;
           } else if(i == 1) {
               nxtNode = curNode + 1;
               nxtCost = 1;
           } else {
               nxtNode = curNode - 1;
               nxtCost = 1;
           }

           if(nxtNode >= 0 && nxtNode < MAX && dist[nxtNode] > dist[curNode] + nxtCost) {
               q.push(nxtNode);
               dist[nxtNode] = dist[curNode] + nxtCost;
           }
       }
   }

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> k;


    for(int i = 0; i < MAX; i++) {
        dist[i] = INF;
    }

    dijkstra(n, k);

    return 0;
}
