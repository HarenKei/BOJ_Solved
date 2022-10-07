#include <bits/stdc++.h>

using namespace std;

int n;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> n;

    while(n--){
        string pwd;
        cin >> pwd;

        if(6 <= pwd.length() && pwd.length() <= 9){
            cout << "yes\n";
        } else{
            cout << "no\n";
        }
    }


    return 0;

}