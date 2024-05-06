#include <iostream>
using namespace std;
bool InRange(int x, int y, int n, int m){
    return (0<=x && x<n && 0<=y && y<m);
}
int main() {
    // 여기에 코드를 작성해주세요.
    char k = 'A';
    char grid[100][100]={0,};
    int n,m,dx[4]={0,1,0,-1},dy[4]={1,0,-1,0},dir_num = 0,x=0,y=0;
    cin >> n >> m;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            grid[x][y] = k;
            int nx = x + dx[dir_num];
            int ny = y + dy[dir_num];
            k++;

            if(k > 'Z'){
                k='A';
            }

            if(!InRange(nx,ny,n,m)){
                dir_num = (dir_num+1)%4;
            }else if(grid[nx][ny]!= 0){
                dir_num = (dir_num+1)%4;
            }
            x += dx[dir_num];
            y += dy[dir_num];
        }
    }



    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}