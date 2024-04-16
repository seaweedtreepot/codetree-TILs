#include <iostream>
using namespace std;

bool IsDayReal(int d,int m){
    if(d>31){
        return false;
    }else if(m>6){
        if(m%2==0){
            if(d>31){
                return false;
            }else{
                return true;
            }
        }
    }else if(m<7){
        if(m==2){
            if(d>28){
                return false;
            }else{
                return true;
            }
        }else if(m%2==0){
            if(d>30){
                return false;
            }else{
                return true;
            }
        }
    }
}

bool IsMonthReal(int m){
    if(m > 12){
        return false;
    }else{
        return true;
    }
}

bool IsThisReal(int M, int D){
    if(IsMonthReal(M)){
        if(IsDayReal(D,M)){
            return true;
        }else{
            return false;
        }
    }else{
        return false;
    }
}
int main() {
    // 여기에 코드를 작성해주세요.
    int M,D;
    cin >> M>>D;
    cout << (IsThisReal(M,D)?"Yes":"No");
    return 0;
}