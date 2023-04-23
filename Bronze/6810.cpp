#include <bits/stdc++.h>

using namespace std;

//9780921418
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int base = (9 * 1) + (7 * 3) + (8 * 1) + (0 * 3) + (9 * 1) + (2 * 3) + (1 * 1) + (4 * 3) + (1 * 1) + (8 * 3) ;
    int a, b, c;
    cin >> a >> b >> c;


    cout << "The 1-3-sum is " << base + (a * 1) + (b * 3) + (c * 1) << "\n";

    return 0;
}