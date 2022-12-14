#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

   int ur, tr, uo, to;

   cin >> ur >> tr >> uo >> to;
   
   int ans = (56 * ur) + (24 * tr) + (14 * uo) + (6 * to);

   cout << ans << '\n';


    return 0;
}