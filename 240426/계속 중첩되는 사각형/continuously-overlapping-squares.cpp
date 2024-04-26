#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n; int cnt = 0;
    bool flag = false;
    bool plane[201][201]={};
    cin >> n;
    int x1,x2,y1,y2;
    //i%2==1일때 파란색
    for(int i = 0; i < n ; i++){
        cin >>x1 >>y1 >> x2 >> y2;
        if(i%2==1){
           flag = true; 
        }else{
            flag = false;
        }

        for(int j = x1; j < x2; j++){
            for(int k = y1; k < y2; k++){
                plane[j+100][k+100] = flag;
            }   
        }
    }
    for(int i = 0; i < 201; i++){
        for(int j = 0; j <201; j++){
            if(plane[i][j]){
                cnt++;
            }
        }
    }
    cout << cnt;
    return 0;
}