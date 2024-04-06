#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int arr[10];
    
    for(int i = 0; i < 10; i++){
        cin >> arr[i];
    }
    cout << fixed;
    cout.precision(1);
    int sum_e =0;
    for(int i = 1; i < 10 ; i+=2){
        sum_e += arr[i];
    }


    int sum_t=0;
    for(int i = 2; i < 10; i += 3){
        sum_t += arr[i];
    }

    cout << sum_e << " " << (double)sum_t/3;
    return 0;
}