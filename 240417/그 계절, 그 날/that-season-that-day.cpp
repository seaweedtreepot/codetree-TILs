#include <iostream>
using namespace std;

bool IsThisYun(int y){
    if(y%4==0){
        if(y%100==0){
            if(y%400==0){
                return true;
            }else{
                return false;
            }
        }else{
            return true;
        }
    }else{
        return false;
    }
}

bool IsThisReal(int y, int m, int d){
    if(m>7){
        if(m%2==0){
            if(d>31){
                return false;
            }else{
                return true;
            }
        }else{
            if(d>30){
                return false;
            }else{
                return true;
            }
        }
    }else{
        if(m==2){
            if(IsThisYun(y)){
                if(d>29){
                    return false;
                }
                else{
                    return true;
                }
            }else{
                if(d>28){
                    return false;
                }else{
                    return true;
                }
            }
        }else if(m%2==0){
            if(d>30){
                return false;
            }else{
                return true;
            }
        }else if(m%2!=0){
            if(d>31){
                return false;
            }else {
                return true;
            }
        }
    }
}

void WhatIsSeasons(int y, int m, int d){
    if(IsThisReal(y,m,d)){
        if(3<=m && m<=5){
            cout << "Spring";
        }else if(6<=m && m <=8){
            cout << "Summer";
        }else if(9<=m && m <=11){
            cout << "Fall";
        }else{
            cout << "Winter";
        }
    }else{
        cout << -1;
        return;
    }
}
int main() {
    // 여기에 코드를 작성해주세요.
    int Y,M,D;
    cin >> Y>> M >> D;

    WhatIsSeasons(Y,M,D);
    return 0;
}