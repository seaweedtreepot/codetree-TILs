#include <iostream>
using namespace std;

bool InRange(int x, int y, int n, int m){
    return (0<=x && x < n && 0<=y && y<m);
}
int main() {
    // 여기에 코드를 작성해주세요.
    int n,m;
    cin >> n >> m;
    int dx[4]={0,1,0,-1}, dy[4] = {1,0,-1,0};
    int dir_num = 0;
    int x=0,y = 0,cnt= 1;
    int plane[100][100] = {};


    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j ++){
            int nx = x + dx[dir_num], ny = y + dy[dir_num];
            plane[x][y] = cnt++;
            if(!InRange(nx,ny,n,m) || plane[nx][ny]!=0){
                dir_num = (dir_num+1)%4;
            }
            x += dx[dir_num];
            y += dy[dir_num];
        }
    }


    for(int i = 0; i < n ; i++){
        for(int j = 0; j< m; j++){
            cout << plane[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}