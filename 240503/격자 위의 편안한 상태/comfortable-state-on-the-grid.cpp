#include <iostream>
using namespace std;

bool InRange(int x, int y,int n){
    return (0<=x && x < n && 0<=y && y < n);
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m;//상하좌우로 3칸만 칠해진 상태 카운트하기
    cin >> n >> m;
    bool plain[100][100] = {false};
    int dx[4]={1,0,-1,0},dy[4]={0,-1,0,1};
    int r,c;


    for(int i = 0; i < m; i++){
        cin >> r >> c;

        plain[r-1][c-1]= true;

        int dir_num = 0;
        int cnt =0;

        for(int j = 0; j < 4; j++){
            //cout << dir_num << endl;
            int nx = r-1 + dx[dir_num];
            int ny = c-1 + dy[dir_num++];
            if(InRange(nx,ny,n) && plain[nx][ny]==true){
                cnt++;
            }
        }


        //cout << cnt << endl;
        if(cnt==3){
            cout << 1 << endl;;
        }else{
            cout << 0 << endl;
        }
    }

    
    return 0;
}