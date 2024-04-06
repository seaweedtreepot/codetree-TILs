#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int arr[10];
    cin >> arr[0]; cout << arr[0] << " ";
    int cnt =0;
    for(int i = 1; i < 10; i++){
        arr[i] = arr[0]*(i+1);
        cout << arr[i] << " ";
        if(arr[i]%5 == 0){
            cnt++;
            if(cnt==2){
                break;
            }
        }
    }
    return 0;
}