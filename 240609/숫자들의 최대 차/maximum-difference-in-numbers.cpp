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


    for(int i = 0; i < n; i++){
        //cout << arr[i] << " ";
    }
    //cout << endl;


    int min = 1;
    int max = 1+k;
    for(int j = 0; j < arr[n-1]-k; j++){
        int cnt = 0;
        //cout << "max : " << max << "||" << " ";
    for(int i = 0; i < n; i++){
        if(arr[i]>=min && arr[i]<=max){
            cnt++;
            //cout << arr[i] << " ";
        }else{
            continue;
        }
    }
        if(cnt > cnt_max){
            cnt_max = cnt;
        }
        //cout << endl;
        min++;
        max++;
    }
    //cout << endl;
    cout << cnt_max;
    return 0;
}