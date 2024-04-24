#include <iostream>
#include <string>
using namespace std;

bool whatIsFirst(int m1,int d1, int m2,int d2){
    if(m1==m2){
        return d1 < d2;
    }

    return m1 < m2;
}

int main(){
    int daysOfMonths[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    string daysOfWeek[7] = {"Mon","Tue","Wed","Thu","Fri","Sat","Sun"};
    string rvs_daysOfWeek[7] = {"Mon","Sun","Sat","Fri","Thu","Wed","Tue"};
    int m1,d1,m2,d2;
    cin >> m1 >> d1 >> m2 >> d2;
    int days =0;


    if(whatIsFirst(m1,d1,m2,d2)){//m1d1 이 m2d1보다 빠를때
        while(1){
        if(m1==m2 && d1 == d2){
            break;
        }
        days++;
        d1++;
        if(d1 > daysOfMonths[m1]){
            d1 = 1;
            m1++;
        }
        }

        cout << daysOfWeek[days%7];
    }else{
        while(1){
        if(m1==m2 && d1 == d2){
            break;
        }
        days--;
        d1--;
        if(d1 < 1){
            d1 = daysOfMonths[--m1];
        }
        }

        days = -days;
        cout << rvs_daysOfWeek[days%7];
    }
    
    return 0;
}