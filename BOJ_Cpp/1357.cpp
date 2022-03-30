#include <bits/stdc++.h>

using namespace std;

int Rev(int num){
    string sStr = to_string(num);
    reverse(sStr.begin(), sStr.end());
    return stoi(sStr);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int numX, numY;
    cin >> numX >> numY;

    cout << Rev(Rev(numX) + Rev(numY)) << endl;

    return 0;
}