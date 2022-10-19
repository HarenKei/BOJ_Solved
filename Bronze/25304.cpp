#include <bits/stdc++.h>
#define MAX 101

using namespace std;

int x, n, sum;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> x >> n;

    while(n--){
        int a, b;
        cin >> a >> b;
        sum += (a * b);
    }

    if(x == sum) cout << "Yes\n";
    else cout << "No\n";
    

    
    return 0;
}