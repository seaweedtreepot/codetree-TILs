#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int arr[100];
    int cnt = 0;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++){
        bool flag = false;
        for(int j = i; j < n; j++){
            if(arr[j]>arr[j+1]){
                flag = true;
                break;
            }
        }
        if(flag){
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}