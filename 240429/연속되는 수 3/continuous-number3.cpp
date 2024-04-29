#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int arr[1000];
    int n;
    int cnt=0;
    int max = 0;
    cin >> n;

    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }

    for(int i = 0 ; i < n ; i++){
        if(i==0){
            cnt ++;
        }else if (arr[i] * arr[i-1] < 0){
            cnt = 1;
        }else{
            cnt++;
        }

        if(max < cnt)
            max = cnt;
    }

    cout << max;
    return 0;
}