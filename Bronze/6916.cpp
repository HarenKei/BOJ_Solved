#include<bits/stdc++.h>

using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    const char *DIGITS[] = {
            " * * *\n*     *\n*     *\n*     *\n\n*     *\n*     *\n*     *\n * * *\n",
            "\n      *\n      *\n      *\n\n      *\n      *\n      *\n",
            " * * *\n      *\n      *\n      *\n * * *\n*\n*\n*\n * * *\n",
            " * * *\n      *\n      *\n      *\n * * *\n      *\n      *\n      *\n * * *\n",
            "\n*     *\n*     *\n*     *\n * * *\n      *\n      *\n      *\n",
            " * * *\n*\n*\n*\n * * *\n      *\n      *\n      *\n * * *\n",
            " * * *\n*\n*\n*\n * * *\n*     *\n*     *\n*     *\n * * *\n",
            " * * *\n      *\n      *\n      *\n\n      *\n      *\n      *\n",
            " * * *\n*     *\n*     *\n*     *\n * * *\n*     *\n*     *\n*     *\n * * *\n",
            " * * *\n*     *\n*     *\n*     *\n * * *\n      *\n      *\n      *\n * * *\n"
    };

    int n;
    cin >> n;

    cout << DIGITS[n] << "\n";

    return 0;
}
