#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    int arr[100];
    arr[0] = 1; arr[1] = n;
    cout << 1 << " " << n << " ";
    int cnt =0;
    for(int i = 2; i < 100; i++){
        arr[i] = arr[i-1] + arr[i-2];
        if(arr[i] > 100)
            {
                cnt =  i;
                break;
            }
    }

    for(int i = 2; i < cnt+1 ; i++){
        cout << arr[i] << " ";
    }
    return 0;
}