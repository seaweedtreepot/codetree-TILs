#include <iostream>
#include <string>
using namespace std;

bool InRange(int x, int y, int n){
    return 0<=x && x < n && 0<=y && y<n;
}
int main() {
    // 여기에 코드를 작성해주세요.
    int n,x,y,dir_num=0,t,dx[4]={-1,0,1,0},dy[4]={0,1,0,-1},grid[99][99]={};//L=-1 R = +1
    string dir;

    cin >> n >> t >> dir;

    for(int i = 0; i < n ; i++){
        for(int j = 0; j < n; j++){
            cin >> grid[i][j];
        }
    }
    x = y = n/2;
    int sum = grid[x][y]; 
    for(int i = 0; i < t; i++){
        if(dir[i]=='L'){
            dir_num = (dir_num + 3)%4;
        }else  if(dir[i]=='R'){
            dir_num = (dir_num + 1)%4;
        }else{
            int nx = dx[dir_num]+x , ny = dy[dir_num]+y;
            if(InRange(nx,ny,n)){
                x = nx;
                y = ny;
                sum+=grid[x][y];
            }
        }
    }

    cout << sum;
    return 0;
}