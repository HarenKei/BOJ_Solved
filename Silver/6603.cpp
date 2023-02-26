#include <bits/stdc++.h>

using namespace std;

int k;
bool visited[14];
vector<int> lotto;
int lottoArr[6];

void DFS(int dep, int idx){
    if(dep == 6){
        for(int i = 0; i < 6; i++){
            cout << lottoArr[i] << " ";
        }
        cout << "\n";
    } else {
        for(int i = idx; i < k; i++){
            if(!visited[i]){
                visited[i] = true;
                lottoArr[dep] = lotto[i];
                DFS(dep+1, i);
                visited[i] = false;
            }
        }

    }

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    while(1){
        cin >> k;

        if(k == 0) break;
        
        for(int i = 0; i < k; i++){
            int input;
            cin >> input;
            lotto.push_back(input);
        }

        DFS(0, 0);
        cout << "\n";

        memset(visited, false, sizeof(visited));
        memset(lottoArr, 0, sizeof(lottoArr));
        lotto.clear();
    }
    return 0;
}