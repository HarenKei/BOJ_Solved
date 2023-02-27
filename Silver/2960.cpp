#include <bits/stdc++.h>
#define MAX 1001

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, k;
    bool visited[MAX] = {false,};
    int cnt = 0;

    cin >> n >> k;

    for(int i = 2; i <= n; i++){
        for(int j = i; j <= n; j += i){
            //2의 배수, 3의 배수... n의 배수를 제거해나가기 위함
            if(!visited[j]){
                visited[j] = true;
                cnt++;
            }

            if(cnt == k){
                cout << j << "\n";
                return 0;
            }
        }
    }



    return 0;
}