#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    bool chk = true;

    while(chk){
        int a, b;
        cin >> a >> b;

        if(a == 0 && b == 0)
            chk = false;
        else if(a < 0 || b > 10)
            chk = false;
        else
         cout << a + b << endl;
    }
    return 0;
}