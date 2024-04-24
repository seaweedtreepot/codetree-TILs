#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    int NumOfDays[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    int temp=0;
    for(int i =1 ; i < a; i++){
        temp += NumOfDays[i];
    }
    a+=temp;
    a+=b;
    temp =0;
    for(int i =1 ; i < c; i++){
        temp += NumOfDays[i];
    }
    c+= temp;
    c+=d;
    cout << c-a;
    return 0;
}