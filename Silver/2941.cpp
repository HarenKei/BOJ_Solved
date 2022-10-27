#include <bits/stdc++.h>

using namespace std;

string arr[8] = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};
string input;
int cnt;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> input;

    for(int i = 0; i < 8; i++){
        while(input.find(arr[i]) != string::npos){
            input.replace(input.find(arr[i]), arr[i].length(), "*");
        }
    }

    cout << input.length() << endl;


    

    return 0;
}