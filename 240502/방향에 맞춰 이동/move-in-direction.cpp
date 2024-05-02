#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n; cin >> n; char direction;
    int dx[4]= {1,0,-1,0},dy[4] = {0,-1,0,1};
    int num;
    int dot_x=0;
    int dot_y=0;
    for(int i = 0; i < n; i++){
        cin >> direction >> num;
        int dir_num;
        if(direction=='E'){
            dir_num = 0;
        }else if(direction=='S'){
            dir_num = 1;
        }else if(direction=='W'){
            dir_num = 2;
        }else{
            dir_num = 3;
        }
        for(int j = 0; j < num;j++){
            dot_x += dx[dir_num];
            dot_y += dy[dir_num];
        }
    }

    cout << dot_x << " " << dot_y;
    return 0;
}