#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int testCase;
    cin >> testCase;

    for(int i = 0; i < testCase; i++){
        int a, b;
        cin >> a >> b;

        if(a > 0 && b < 10){
            cout << a + b << endl;
        }
    }
    return 0;

}