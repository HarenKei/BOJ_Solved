#include <bits/stdc++.h>


using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    priority_queue<int, vector<int>, greater<int> > pq;

    cin >> n;
    
    for(int i = 0; i < n; i++) {
        int input;
        cin >> input;
        pq.push(input);
    }

    int sum = 0;

    while(pq.size() > 1) {
        int a = pq.top();
        pq.pop();

        int b = pq.top();
        pq.pop();

        sum += a + b;
        pq.push(a + b);
    }

    cout << sum << "\n";

    return 0;
}