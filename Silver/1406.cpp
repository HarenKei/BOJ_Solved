#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string str;
    int m;
    stack<char> lst, rst;

    cin >> str;
    for(int i = 0; i < str.length(); i++) {
        lst.push(str[i]);
    }

    cin >> m;

    while(m--) {
        char cmd;
        cin >> cmd;

        if(cmd == 'L') {
            if(!lst.empty()) {
                rst.push(lst.top());
                lst.pop();
            }
        }else if(cmd == 'D') {
            if(!rst.empty()) {
                lst.push(rst.top());
                rst.pop();
            }
        }else if(cmd == 'B') {
            if(!lst.empty()){
                lst.pop();
            }
        }else if(cmd == 'P') {
            char c;
            cin >> c;
            lst.push(c);
        }
    }

    while(!lst.empty()) {
        rst.push(lst.top());
        lst.pop();
    }

    while(!rst.empty()) {
        cout << rst.top();
        rst.pop();
    }

    return 0;
}