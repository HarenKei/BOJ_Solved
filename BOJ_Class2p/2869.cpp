#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b, v;
    int count = 1;
    cin >> a >> b >> v;
    
   while(true){
       int c = (a - b);
       c += c;
       count++;

       if(c >= v){
           break;
       }
   }

    cout << count << endl;

    return 0;
}