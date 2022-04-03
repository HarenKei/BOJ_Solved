#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    string str;
    queue<int> que;
    int x = 0;

    for(int i = 0; i < n; i++){
        cin >> str;

        if(str == "push"){
            cin >> x;
            que.push(x);
        } else if(str == "pop"){
            if(que.empty()){
            cout << -1 << endl;
            } else{
                cout << que.front() << endl;
                que.pop();
            }
        } else if(str == "size"){
            cout << que.size() << endl;
        } else if(str == "empty"){
            cout << que.empty() << endl;
        } else if(str == "front"){
            if(!que.empty())
                cout << que.front() << endl;
            else
                cout << -1 << endl;
        } else if(str == "back"){
            if(!que.empty())
                cout << que.back() << endl;
            else
                cout << -1 << endl;
        }
    }
    return 0;
}