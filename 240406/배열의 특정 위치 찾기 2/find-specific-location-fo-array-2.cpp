#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int arr[10];

    for(int i = 0; i < 10; i++){
        cin >> arr[i];
    }
    int sum_e =0;
    int sum_o =0;
    for(int i = 0; i < 10; i++){
        if(i%2==0){
            sum_e+=arr[i];
        }else{
            sum_o+=arr[i];
        }
    }

    cout << ((sum_e > sum_o)? (sum_e-sum_o) : (sum_o-sum_e));
    return 0;
}