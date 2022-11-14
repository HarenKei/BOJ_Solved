#include <bits/stdc++.h>

using namespace std;

string str;

int x, y, result;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> x >> y;

    if(x > 0){
        if(y > 0) result = 1;
        else result = 4;
    } else{
        if(y > 0) result = 2;
        else result = 3;
    }

    cout << result << '\n';

    return 0;
}