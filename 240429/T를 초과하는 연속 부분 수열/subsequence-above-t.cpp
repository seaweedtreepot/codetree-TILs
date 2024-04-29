#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n,t;
    int max=0;
    int cnt=0;
    int arr[1000] = {};

    cin >> n >> t;

    for(int i =0; i < n; i++){
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++){
        if(arr[i]> t){
            cnt++;
        }else{
            cnt = 0;
        }

        if(max < cnt){
            max = cnt;
        }
    }
    cout << max;
    return 0;
}