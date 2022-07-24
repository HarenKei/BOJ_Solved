#include <bits/stdc++.h>

using namespace std;

int n; //편의점 개수
pair<int, int> home; //집 좌표
pair<int, int> rockFe; //락페 좌표
pair<int, int> cvsV[101]; //편의점 좌표 목록 벡터
bool visited[101];
string result;

bool distance(pair<int, int> a, pair<int, int> b){ //맨해튼 거리 계산, 두 좌표를 파라미터로 함
    int dis = abs(a.first - b.first) + abs(a.second - b.second);
    
    if(dis > 1000) return false; //맨해튼 거리가 1000 초과하여 맥주 떨어질 경우 
    else return true; //1000 이내여서 맥주 괜찮을 경우 
}

void BFS(pair<int, int> a){
    queue< pair<int, int> > q; //BFS용 큐
    q.push(a);

    while(!q.empty()){
        pair<int, int> cur = q.front(); //큐에서 프론트 꺼내 비교
        q.pop();
        
        if(distance(cur, rockFe) == true){  //현재 지점과 락페의 거리가 1000 이내여서 행복하게 도착하는 경우
            result = "happy";
            break;
        } 
        else{ //아직 락페와의 거리가 1000 초과일 경우
            for(int i = 0; i < n; i++){ //편의점 개수만큼 반복 비교
                if(distance(cur, cvsV[i]) && !visited[i]){ //현재 위치와 편의점 i의 거리가 1000 이하, 해당 편의점을 방문하지 않았다면
                    visited[i] = true;
                    q.push(cvsV[i]);
                }
            }
        }
        result = "sad";
    }
    
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t; //테스트 케이스의 개수
    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> n; //편의점 개수 입력

        cin >> home.first >> home.second; //집 좌표 입력 x, y 순

        for(int j = 0; j < n; j++){
            cin >> cvsV[j].first >> cvsV[j].second; //편의점 좌표 입력 x, y 순
        }

        cin >> rockFe.first >> rockFe.second; //락페 좌표 입력 x, y 순
        
        BFS(home); //집 좌표 기준으로 BFS

        cout << result << '\n';

        memset(visited, false, sizeof(visited)); //방문 체크 초기화
        //home = make_pair(0, 0);
        //rockFe = make_pair(0, 0);
        n = 0; //편의점 개수 초기화
    }
    
    
    
    return 0;
    
}

