#include <iostream>
using namespace std;

bool inrange(int x, int y,int n){
    return (0<=x && x < n && 0<= y && y< n);
}
int main() {
    // 여기에 코드를 작성해주세요.
    int dy[4]={1,0,-1,0},dx[4] = {0,1,0,-1}, plane[100][100];
    int cnt = 0;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> plane[i][j];
        }
    }   
    for(int i = 0; i < n;i++){
        for(int j = 0; j < n; j++){
            int sub_cnt =0;
            for(int k=0; k < 4; k++){
                int nx = i + dx[k],ny = j + dy[k];
                if(inrange(nx,ny,n) && plane[nx][ny]==1){
                    sub_cnt++;
                }
            }
            if(sub_cnt > 2){
                cnt++;
            }
        }
    }

    cout << cnt;
    return 0;
}