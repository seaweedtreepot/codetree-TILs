#include <iostream>
using namespace std;

bool InRange(int x,int y, int n , int m){
    return (0<=x && x<n && 0<=y && y<m);
}
int main() {
    // 여기에 코드를 작성해주세요.
    int n,m,dx[4]={1,0,-1,0},dy[4]={0,1,0,-1},grid[100][100]={};
    
    cin >> n >> m;

    int nx=0, ny = 0,dir_num = 0,cnt=1;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            grid[nx][ny]=cnt++;

            if(!InRange(nx+dx[dir_num],ny+dy[dir_num],n,m)){
                dir_num = (dir_num+1)%4;
            }else if(grid[nx+dx[dir_num]][ny+dy[dir_num]]!=0){
                dir_num = (dir_num+1)%4;
            }
            nx += dx[dir_num];
            ny += dy[dir_num];
        }
        
    
    }
    
    for(int k = 0; k < n; k++){
        for(int u = 0; u < m; u++){
            cout << grid[k][u] << " ";
        }
        cout << endl;
         }
    cout << endl;
    return 0;
}