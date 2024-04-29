#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    int arr[1000];

    for(int i =0; i < n; i++){
        cin >> arr[i];
    }


    int cnt = 0;
    int max = 1;
    for(int i = 0; i < n; i++){
        if(i==0){
            cnt++;
        }else if(arr[i]!= arr[i-1]){
            cnt = 1;
        }else{
            cnt++;
        }

        if(max < cnt){
            max = cnt;
        }

    }
    cout << max ;
    return 0;
}