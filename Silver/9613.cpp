#include <bits/stdc++.h>
#define MAX 100001

using namespace std;

long long GCD(int a, int b){
    if(b == 0)
        return a;
    else
        return GCD(b, a%b);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        int n;
        vector<int> v;
        long long result = 0;
        cin >> n;

        for(int i = 0; i < n; i++){
            int input;
            cin >> input;
            v.push_back(input);
        }

        for(int i = 0; i < n; i++){
            for(int j = i + 1; j < n; j++){
                result += GCD(v[i], v[j]);
            }
        }
        cout << result << "\n";
    }


    return 0;
}