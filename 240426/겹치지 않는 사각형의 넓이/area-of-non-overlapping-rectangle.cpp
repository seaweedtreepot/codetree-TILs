#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int x1,x2,y1,y2;
    bool plane[2001][2001] = {};

    for(int i =0; i < 2; i++){
        cin >>x1 >>y1 >> x2 >> y2;
       // cout << x1 << " " << y1 << " " << x2 << " " << y2 <<endl;
        for(int j = x1; j < x2;j++){
            for(int k = y1; k < y2; k++){
                plane[j+1000][k+1000]=true;
                 //cout << j << " " << k << endl;
            }
        }
    }
        cin >>x1 >>y1 >> x2 >> y2;
        for(int j = x1; j < x2;j++){
            for(int k = y1; k < y2; k++){
               plane[j+1000][k+1000]=false;
            }
        }
    int cnt=0;

    for(int i = 0; i < 2001; i++){
        for(int j = 0; j < 2001; j++){
            if(plane[i][j]){
               // cout << i-1000 << " " << j-1000 << endl;
                cnt++;
            }
        }
    }

    cout << cnt;
    return 0;
}