#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int arr[10000];
    int cnt = 0;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        cnt += arr[i];
    }
    int each_block = cnt/n;
    cnt = 0;
    for(int i = 0; i < n; i++){
        if(each_block < arr[i]){
            cnt += arr[i]-each_block;
        }
    }

    cout << cnt;
    return 0;
}