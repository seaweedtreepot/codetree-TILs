#include <iostream>
using namespace std;

bool InRange(int n,int x,int y){
    return (0<=x && x<n && 0<=y && y<n);
}
int main() {
    // 여기에 코드를 작성해주세요.
    ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
    int n,dx[4]= {0,1,0,-1},dy[4]={1,0,-1,0},k=0,dir_num=1,nx=0,ny=0,cnt=0;
    char plain[1000][1000];//오른쪽 아래 왼쪽 위
    
    cin >> n;
    for(int i = 0; i  <n; i++){
        for(int j = 0;j  < n; j++){
            cin >> plain[i][j];
        }
    }

    cin >> k;
    
    int cmd_dir_num = 0;
    for(int i = 1; i < k; i++){
        nx += dx[cmd_dir_num];
        ny += dy[cmd_dir_num];
        
        if(!InRange(n,nx,ny)){
            nx-=dx[cmd_dir_num];
            ny-=dy[cmd_dir_num];
            dir_num = (dir_num +5)%4;
            cmd_dir_num= (cmd_dir_num +5)%4;
        }else if(i==k-1){
            //nx-=dx[cmd_dir_num];
            //ny-=dy[cmd_dir_num];
        }
    }
    //cout << dir_num << " " << nx << " " << ny;
    //nx,ny = 들어가는 좌표
    //dir_num = 들어가는 방향
    
    for(int i = 0; i < n*n; i++){//오른쪽 아래 왼쪽 위
        if(plain[nx][ny]=='\\'){
            if(dir_num == 0){
                dir_num = 1;
            }else if(dir_num == 1){
                dir_num = 0;
            }else if(dir_num == 2){
                dir_num = 3;
            }else if(dir_num == 3){
                dir_num = 2;
            }
        }else{
            if(dir_num == 0){//오른쪽 아래 왼쪽 위
                dir_num = 3;
            }else if(dir_num == 1){
                dir_num = 2;
            }else if(dir_num == 2){
                dir_num = 1;
            }else if(dir_num == 3){
                dir_num = 0;
            }
        }
        nx += dx[dir_num];
        ny += dy[dir_num];
        cnt++;
        if(!InRange(n,nx,ny)){
            //cout << nx << ny << endl; 
            break;
        }
    }
    

    cout << cnt;
    return 0;
}