#include <bits/stdc++.h>

using namespace std;

int n; //배열의 길이
vector<int> a;
vector<int> b;
int sum = 0;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        a.push_back(x);
    }

    for(int j = 0; j < n; j++){
        int x;
        cin >> x;
        b.push_back(x);
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end(), greater<int>());

    for(int i = 0; i < n; i++){
        sum += a[i] * b[i];
    }

    cout << sum << '\n';
    return 0; 
}