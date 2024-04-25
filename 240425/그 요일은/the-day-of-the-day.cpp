#include <iostream>
#include <string>
using namespace std;

int DayToInt(string A){
    if(A == "Mon"){
        return 0;
    }else if(A=="Tue"){
        return 1;
    }else if(A=="Wed"){
        return 2;
    }else if(A=="Thu"){
        return 3;
    }else if(A=="Fri"){
        return 4;
    }else if(A=="Sat"){
        return 5;
    }else if(A=="Sun"){
        return 6;
    }
}
int main() {
    // 여기에 코드를 작성해주세요.
    string SevenDays[7] = {"Mon","Tue","Wed","Thu","Fri","Sat","Sun"};
    int month[13] = { 0,31,29,31,30,31,30,31,31,30,31,30,31};
    int m1,d1,m2,d2;
    int cnt = 0;
    cin >> m1 >> d1 >> m2 >> d2;
    string A;
    cin >> A;
    int day = DayToInt(A);
    int dates = 0;
    while(1){
        if(m1==m2 && d1 == d2){
            break;
        }
        d1++;
        dates++;
        
        if(d1 > month[m1]){
            d1 = 1;
            m1++;
        }
    }
    cout << (dates-day)/7 + ((dates>=day)?1:0);
    
    
    return 0;
}