#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int a , b ,c ;
    cin >> a >> b>>c;
    int day, hour , min;
    day = 11;
    hour = 11;
    min = 11;
    int el_min =0;
    if(min < c && hour < b){
        if(day == 11){
            cout << -1 ;
            return 0;
        }
    }
   while(1){
    if(day == a && hour == b && min == c){
        break;
    }
    min ++;
    el_min++;
    if(min == 60){
        min = 0;
        hour ++;
        if(hour == 24){
            hour = 0;
            day ++;
        }
    }
    //cout << day << ": " << hour << ": " << min << endl;
   }
    cout << el_min ;
    return 0;
}