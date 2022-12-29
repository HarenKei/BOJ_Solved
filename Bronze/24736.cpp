#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t, f, s, p, c;
    int sumA = 0;
    int sumB = 0;

    cin >> t >> f >> s >> p >> c;
    sumA += (t * 6) + (f * 3) + (s * 2) + p + (2 * c);
    
    t = 0; f = 0; s = 0; p = 0; c = 0;

    cin >> t >> f >> s >> p >> c;
    sumB += (t * 6) + (f * 3) + (s * 2) + p + (2 * c);

    cout << sumA << " " << sumB << "\n";


    return 0;
}