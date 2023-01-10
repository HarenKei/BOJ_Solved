#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    cin.ignore();

    vector<string> v;

    for(int i = 1; i <= n; i++){
        string str;
        getline(cin, str);

        v.push_back((to_string(i) + ". " + str));
        
    }

    for(int i = 0; i < n; i++){
        cout << v[i] << "\n";
    }

    return 0;
}