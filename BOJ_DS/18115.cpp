#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<int> vec;
    deque<int> dq;
    string str;

    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        int ch;
        cin >> ch;
        vec.push_back(ch);
    }
    reverse(vec.begin(), vec.end());

    for(int i = 1; i <= n; i++){
        if(vec[i-1] == 1){
            dq.push_front(i);
        } else if(vec[i-1] == 2){
            int temp = dq.front();
            dq.pop_front();
            dq.push_front(i);
            dq.push_front(temp);
        } else if(vec[i-1] == 3){
            dq.push_back(i);
        }
    }
    while(!dq.empty()){
        cout << dq.front() << ' ';
        dq.pop_front();
    }
    cout << '\n';

    return 0;
}