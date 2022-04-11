#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    deque<int> deq;
    vector<int> vec;
    int n, m;
    int cnt = 0;



    cin >> n;
    for(int i = 1; i <= n; i++)
        deq.push_back(i);

    cin >> m;
    
    while(m--){
        int idx = 0;
        int num = 0;
        cin >> num;

        for(int i = 0; i < deq.size(); i++){
            if(num == deq.at(i)){
                idx = i;
                break;
            }
        }

        if(idx <= deq.size() / 2){
            for(int i = 0; num != deq.front(); i++){
                deq.push_back(deq.front());
                deq.pop_front();
                cnt++;
            }
        } else if(idx > deq.size() / 2){
            for(int i = 0; num != deq.front(); i++){
                deq.push_front(deq.back());
                deq.pop_back();
                cnt++;
            }
        }
        deq.pop_front();
    }

    cout << cnt << endl;

    return 0;

}