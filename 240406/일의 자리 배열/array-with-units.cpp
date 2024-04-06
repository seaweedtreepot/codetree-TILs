#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int arr[10];
    cin >> arr[0] >> arr[1];
    cout << arr[0] <<" " << arr[1] << " ";

    for(int i = 2; i < 10; i++){
        arr[i] = arr[i-2] + arr[i-1];
        cout << arr[i]%10 << " ";
    }
   
    return 0;
}