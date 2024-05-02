#include <iostream>
#include <string>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int dx[4] = {0,1,0,-1}, dy[4] = {1,0,-1,0};//북동남서

    string cmd;
    int n;
    int dot[2] = {0,0};
    cin >> cmd;
    int direction = 0;
    for(int i = 0; i < cmd.length(); i++){

        if(cmd[i]=='L'){
            direction = (direction+ 4 -1) %4;
        }else if(cmd[i]=='R'){
            direction = (direction+1)%4;
        }else {
            dot[0]+=dx[direction];
            dot[1]+=dy[direction];
        }
        //cout << dot[0] << " " << dot[1];
    }

    cout << dot[0] << " " << dot[1];
    return 0;
}