#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    queue<int> josep;
    int n, k;

    cin >> n >> k;

    for(int i = 1; i <= n; i++){
        josep.push(i);
    }

    cout << "<";

    while(!josep.empty()){
        for(int j = 1; j < k; j++){
            int temp = josep.front();
            josep.pop();
            josep.push(temp);
        }
        cout << josep.front();
        if(josep.size() > 1)
            cout << ", "; 
        josep.pop();
    }
    cout  << ">" << '\n';
    josep.pop();

    return 0;
}