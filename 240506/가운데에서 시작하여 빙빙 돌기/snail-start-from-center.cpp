#include <iostream>
using namespace std;

bool InRange(int x, int y, int n){
    return 0<=x && x<n && 0<=y && y<n;
}
int main() {
    // 여기에 코드를 작성해주세요.
    //진행하려는 방향기준 왼쪽 앞 오른쪽이 접근 한적 없는곳일때 방향을 꺾음

    int cnt = 1, n, dx[4] = {0,-1,0,1}, dy[4]={1,0,-1,0},grid[100][100]={},dir_num = 3;
    cin >> n;


    int x = n/2,y=n/2;

    for(int i = 0; i < n*n; i++){
        grid[x][y] = cnt++;
        int lfrr =0;
        
        int nx = x + dx[0], ny = y + dy[0];
        if(!InRange(nx,ny,n) || grid[nx][ny]==0){
            lfrr++;
            //cout << cnt-1 << " 의 오른쪽은 " << grid[nx][ny] << "입니다" <<endl;
        }
        nx = x + dx[1], ny = y + dy[1];
        if(!InRange(nx,ny,n)||grid[nx][ny]==0){
            lfrr++;
            //cout << cnt-1 << " 의 위쪽은 " << grid[nx][ny] << "입니다" <<endl;
        }
        nx = x + dx[2], ny = y + dy[2];
        if(!InRange(nx,ny,n)||grid[nx][ny]==0){
            lfrr++;
            //cout << cnt-1 << " 의 왼쪽은 " << grid[nx][ny] << "입니다" <<endl;
        }
        nx = x + dx[3], ny = y + dy[3];
        if(!InRange(nx,ny,n)||grid[nx][ny]==0){
            lfrr++;
            //cout << cnt-1 << " 의 아랫쪽은 " << grid[nx][ny] << "입니다" <<endl;
        }

        if(lfrr>=3){
            dir_num = (dir_num+1)%4;
        }
        x+=dx[dir_num];
        y+=dy[dir_num];
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}