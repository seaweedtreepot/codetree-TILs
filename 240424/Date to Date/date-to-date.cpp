#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    int NumOfDays[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    int temp = 0;
   
    int a_days=0;
    for(int i =0; i < a; i++){
        a_days+=NumOfDays[i];
    }
    a_days += b;
    int c_days = 0;
    for(int i = 0; i < c; i++){
        c_days += NumOfDays[i];
    }
    c_days += d;

    cout << c_days - a_days +1;
    return 0;
}