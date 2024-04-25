#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    bool plane[201][201]={};
    cin >> n;
    int x1,y1,x2,y2;
    for(int i = 0; i <n; i++){
        cin >> x1 >> y1 >> x2 >> y2;
        for(int j = x1; j < x2;j++){
            for(int k = y1; k < y2;k++){
                plane[j][k]=true;
            }   
        }
    }
    int cnt =0;
    for(int i = 0 ; i< 201; i++){
        for(int j = 0; j < 201;j ++){
            if(plane[i][j]==true){
                cnt++;
            }
        }
    }
    cout << cnt;
    return 0;
}