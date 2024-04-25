#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int x1,x2,y1,y2;
    bool plane[2001][2001]={};
    cin >>x1 >> y1 >> x2 >> y2;
    for(int i = x1+1000; i <x2+1000;i++ ){
        for(int j = y1+1000; j < y2+1000; j++){
            plane[i][j]=true;
            //cout << i-1000 << " " << j - 1000 << endl;
        }
    }

    cin >>x1 >> y1 >> x2 >> y2;
    for(int i = x1+1000; i <x2+1000;i++ ){
        for(int j = y1+1000; j < y2+1000; j++){
            plane[i][j]=false;
           // cout << i-1000 << " " << j - 1000 << endl;
        }
    }

    int x_max=0,x_min=2000,y_max=0,y_min=2000;
    for(int i = 0; i <2001;i++ ){
        for(int j = 0; j < 2001; j++){
            if(plane[i][j]){
                if(x_max < i){
                    x_max = i;
                }
                if(x_min > i){
                    x_min = i;
                }
                if(y_max < j){
                        y_max = j;
                    }
                    if(y_min > j){
                        y_min = j;
                    }
            }
        }
    }
    //cout << x_min << " " << y_min << " "<<x_max << " " << y_max<<endl;
    int cnt =0;
    for(int i = x_min; i <=x_max;i++){
        for(int j = y_min; j <= y_max; j++){
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}