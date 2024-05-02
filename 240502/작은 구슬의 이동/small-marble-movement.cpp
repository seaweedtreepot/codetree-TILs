#include <iostream>
using namespace std;

bool inrange(int x,int y,int n){
    return (1<=x && x <=n && 1<=y && y<=n);
}
int main() {
    // 여기에 코드를 작성해주세요.
    int n,t, r, c,dir_num;
    char d;
    int dx[4] = {1,0,-1,0}, dy[4] = {0,1,0,-1};
    cin >> n>>t;
    cin >> r >> c >> d;

    if(d=='U'){
        dir_num = 3;
    }else if(d=='D'){
        dir_num =1;
    }else if(d=='L'){
        dir_num = 2;
    }else if(d=='R'){
        dir_num = 0;
    }

    
    for(int i = 0; i < t; i++){
        //cout << r << " " << c << endl;
        //cout << i+1 << " : ";
        c += dx[dir_num];
        r += dy[dir_num];
        //cout << r << " " << c << endl;
        if(!inrange(r,c,n)){
            dir_num +=2;
            dir_num %=4;
            //cout <<"방향전환" << " " << dir_num << endl;
            c+=dx[dir_num];
            r+=dy[dir_num];
            //cout <<"벽박고 뒤돌기:"<< r << " " << c << endl;
        }
    }

    cout << r << " " << c;
    return 0;
}