#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int arr[4];
    int tarr[4];
    for(int i = 0; i < 4; i++){
        cin >> arr[i] >> tarr[i];
    }

    sort(arr,arr+4);
    sort(tarr,tarr+4);
    cout << (arr[3]-arr[0]) * (tarr[3]-tarr[0]);
    return 0;
}