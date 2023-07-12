#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b, c, d, e;
    int ans = 0;
    //a : 원래의 고기 온도 -100 <= a <= 100 a != 0
    //b : 목표온도 a < b
    //c : 얼어있는 고기를 1도 데우는 데 걸리는 시간
    //d : 얼어있는 고기를 해동하는 데 걸리는 시간
    //e : 얼어 있지 않은 고기를 1도 데우는 에 걸리는 시간 e

    //1. 고기가 얼어 있고 온도가 0도 미만이면 온도가 C에 1도
    //2. 고기가 얼어 있고 온도가 0도일때 해동하는데 D초
    //3. 고기가 얼어 있지 않을 때 : 온도가 E초에 1도씩 오른다

    cin >> a >> b >> c >> d >> e;

    if(a < 0) {
        //고기가 얼어 있을 때
        //고기 0도까지 + 해동 + b도까지 올리기

        cout << (-1 * a * c) + d + (e * b) << "\n";

    } else if (a > 0) {
        //고기가 얼어 있지 않을 때
        //고기 온도 b까지 올리기
        cout << e * (b - a) << "\n";
    } else {
        //해동 + b도까지 올리기
        cout << d + (e  * b) << "\n";
    }
 
    return 0;
}