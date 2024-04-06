#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int arr[10] = {};

    for(int i = 0; i < 10; i++){
        cin >> arr[i];
    }
    cout << (char)arr[1] << " " << (char)arr[4] << " " << (char)arr[7];
    return 0;
}