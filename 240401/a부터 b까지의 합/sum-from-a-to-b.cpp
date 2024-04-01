#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int sum_val=0;
    int a, b;
    cin >> a>> b;

    for(int i = a; i <= b; i++){
        if(i%2==0){
            sum_val += i;
        }
    }

    cout << sum_val;
    return 0;
}