#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int a,b,c;

    cin >> a >> b >> c;
    int cnt = 0;
    if(abs(a-b)==2 ||abs(b-c)==2){
        cout << 1 ;
        return 0;
    }else if(abs(a-b)>2 || abs(b-c)>2){
        cout << 2 ;
    }else if(abs(a-b)==1 || abs(b-c)==1){
        cout << 0 ;
    }

    return 0;
}