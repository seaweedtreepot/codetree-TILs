#include <iostream>
#include <string>
using namespace std;


int main() {
    // 여기에 코드를 작성해주세요.
    int dx[4]={1,0,-1,0}, dy[4] = {0,-1,0,1};
    string n;
    cin >> n;

    int dot_x =0,dot_y=0;

    char dir;
    int dir_num = 3;
    int cnt = 1;
    for(int i = 0; i < n.length(); i++){
        if(n[i]=='L'){
            dir_num = (dir_num -1 + 4 )%4;
        } else if(n[i]=='R'){
            dir_num = (dir_num +1)%4;
        } else {
            dot_x += dx[dir_num];
            dot_y += dy[dir_num];
        }
        //cout << n[i] << " " << dot_x << " " << dot_y << endl;
        if(dot_x ==0 && dot_y == 0){
            cout << cnt ;
            return 0;
        }
        cnt++;
        
    }
    cout << -1;
    return 0;
}