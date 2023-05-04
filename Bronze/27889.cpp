#include <bits/stdc++.h>
#define NLCS "North London Collegiate School"
#define BHA "Branksome Hall Asia"
#define KIS "Korea International School"
#define SJA "St. Johnsbury Academy"

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;
    cin >> s;

    if(s == "NLCS") {
        cout << NLCS << "\n";
    } else if(s == "BHA") {
        cout << BHA << "\n";
    } else if(s == "KIS") {
        cout << KIS << "\n";
    } else if(s == "SJA") {
        cout << SJA << "\n";
    }

    return 0;
}