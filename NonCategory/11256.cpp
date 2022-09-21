#include <bits/stdc++.h>

using namespace std;

int t;
int j, n;
int cnt;
priority_queue<int> pq;

void reset(){
    while(!pq.empty()){
        pq.pop();
    }
    cnt = 0;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> t;
    
    while(t--){
        cin >> j >> n;

        for(int i = 0; i < n; i++){
            int r, c;
            cin >> r >> c;
            pq.push(r * c);
        }
        
        cnt = 0;
        while(j > 0){
            int top = pq.top();
            j -= top;
            cnt++;
            pq.pop();
            
        }
        cout << cnt << '\n';

        reset();
    }

    return 0;
}