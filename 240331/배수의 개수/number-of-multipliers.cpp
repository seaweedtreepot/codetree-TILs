#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int mul_t=0, mul_f=0;
    int num;
    for(int i = 0 ; i < 10; i++){
        cin >> num;
        if(num%3==0 && num%5==0){
            mul_t++; mul_f++;
        }
        else if(num%3==0){
            mul_t++;
        }else if(num%5==0){
            mul_f++;
        }
    }
    cout << mul_t << " " << mul_f;
    return 0;
}