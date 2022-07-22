#include <bits/stdc++.h>
#define MAX 100001

using namespace std;

int n, k; //수빈이의 위치와 동생의 위치
queue< pair<int, int> > q; //수빈이가 이동할 위치와 이동할 때 걸린 시간 pair로 저장
bool visited[MAX]; //방문


void BFS(int n){
    visited[n] = true;
    q.push(make_pair(n, 0)); //첫 시작점, 시간 0

    while(!q.empty()){
        int move = q.front().first; //이동
        int time = q.front().second; //시간
        q.pop();

        if(move == k){
            cout << time << '\n';
            break;
        }

        int mov1 = move - 1; //X - 1 걷기
        int mov2 = move + 1; //X + 1 걷기
        int mov3 = move * 2; //X * 2 순간이동

        if(mov1 >=0 && mov1 < MAX && visited[mov1] == false){
            visited[mov1] = true;
            q.push(make_pair(mov1, time + 1));
        } 
        if(mov2 >=0 && mov2 < MAX && visited[mov2] == false){
            visited[mov2] = true;
            q.push(make_pair(mov2, time + 1));
        }
        if(mov3 >= 0 && mov3 < MAX && visited[mov3] == false){
            visited[mov3] = true;
            q.push(make_pair(mov3, time + 1));
        }
    }

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> k;

    BFS(n);

    return 0;
}