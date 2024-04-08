#include <iostream>
#include <climits>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int arr[100] = {};
    int cnt = 0;
    int min_val = INT_MAX, max_val = INT_MIN;
    while(1){
        cin >> arr[cnt++];
        if(arr[cnt-1]==999 || arr[cnt-1]==(-999)){
            break;
        }
        if(arr[cnt-1]>max_val){
            max_val = arr[cnt-1];
        }
        if(arr[cnt-1]<min_val){
            min_val = arr[cnt-1];
        }
    }


    cout << max_val << " " << min_val ;
    return 0;
}