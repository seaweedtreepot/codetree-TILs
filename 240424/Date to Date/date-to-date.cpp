#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    int NumOfDays[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    int temp = 0;
    if(a+1 != c && a!=c){
        for(int i = a; i < c; i++){
            temp += NumOfDays[i];
        }
    }
    a = NumOfDays[a]-b+1;
    c = d;

    cout << a + c + temp;
    return 0;
}