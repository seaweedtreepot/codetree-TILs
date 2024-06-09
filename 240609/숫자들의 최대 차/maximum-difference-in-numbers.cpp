#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n,k;
    int cnt_max = 0;
    cin >> n >> k;
    int arr[1000];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    sort(arr,arr+n);
    int min = arr[0];
    int max = arr[0]+k;
    for(int j = 0; j < n; j++){
        int cnt = 0;
    for(int i = 0; i < n; i++){
        if(arr[i]>=min && arr[i]<=max){
            cnt++;
        }else{
            break;
        }
    }
        if(cnt > cnt_max){
            cnt_max = cnt;
        }
        min ++;
        max ++;
    }
    cout << cnt_max;
    return 0;
}