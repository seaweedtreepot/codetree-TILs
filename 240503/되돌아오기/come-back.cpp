#include <iostream>
using namespace std;


int main() {
    // 여기에 코드를 작성해주세요.
    int dx[4]={1,0,-1,0}, dy[4] = {0,-1,0,1};
    int n;
    cin >> n;

    int dot_x =0,dot_y=0;

    char dir;
    int dir_num = 0;
    int distance = 0;
    int cnt = 1;
    for(int i = 0; i < n; i++){
        cin >> dir >> distance;
        if(dir=='N'){
            dir_num = 3;
        } else if(dir=='W'){
            dir_num = 2;
        } else if(dir=='E'){
            dir_num = 0;
        } else{
            dir_num = 1;
        }

        for(int j = 0; j < distance ; j++){
            dot_y += dy[dir_num];
            dot_x += dx[dir_num];
            //cout << dot_x << " " << dot_y << endl;
            if(dot_x ==0 && dot_y == 0){
                cout << cnt ;
            return 0;
            }
            cnt++;

        }
        
        
    }
    cout << -1;
    return 0;
}