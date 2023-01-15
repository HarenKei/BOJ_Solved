#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b, c;
    cin >> a >> b >> c;

    if(a == 60 && a == b && b == c){
        cout << "Equilateral\n";
    } else if(a + b + c == 180){
        if(a == b || b == c || a == c){
            cout << "Isosceles\n";
        }else {
            cout << "Scalene\n";
        }
    } else {
        cout << "Error\n";
    }

    return 0;
}