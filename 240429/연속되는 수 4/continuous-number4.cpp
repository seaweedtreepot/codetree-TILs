#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n;  
    cin >> n;
    int max=0;
    int cnt = 0;
    int arr[1000];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }


    for(int i = 0; i < n; i++){
        if(i==0){
            cnt++;
        }else if (arr[i] > arr[i-1]){
            cnt++;
            //cout << arr[i] << " " << arr[i-1] << endl;
        }else{
            cnt = 1;
        }

        if(max < cnt){
            max = cnt;
        }
    }

    cout << max;
    return 0;
}