#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int x1,x2,y1,y2;
    int plane[2001][2001]={};
    cin >>x1 >> y1 >> x2 >> y2;
    for(int i = x1; i <x2;i++ ){
        for(int j = y1; j < y2; j++){
            plane[i+1000][j+1000]=true;
        }
    }

    cin >>x1 >> y1 >> x2 >> y2;
    for(int i = x1; i <x2;i++ ){
        for(int j = y1; j < y2; j++){
            plane[i+1000][j+1000]=false;
        }
    }

    int x_max=0,x_min=2000,y_max=0,y_min=2000;
    for(int i = 0; i <2001;i++ ){
        for(int j = 0; j < 2001; j++){
            if(plane[i][j]){
                if(x_max < i){
                    x_max = i;
                    if(y_max < j){
                        y_max = j;
                    }else if(y_min > j){
                        y_min = j;
                    }
                }else if(x_min > i){
                    x_min = i;
                    if(y_max < j){
                        y_max = j;
                    }else if(y_min > j){
                        y_min = j;
                    }
                }
            }
        }
    }
    int cnt =0;
    for(int i = x_min; i <=x_max;i++){
        for(int j = y_min; j <= y_max; j++){
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}