#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n,k,ans_min=0;
    cin >> n >> k;
    int arr[100];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    int cur = 0;
    ans_min = arr[0];


    for(int i = 0; i < n; i++){//
        int min = 100;
        i = cur;
        for(int j = 1; j <= k; j++){//착지지점 정하기
            if(i+1 == n-1){//다음에 뛰는곳이 무조건 마지막 지점일 경우
                if(arr[n-1]>ans_min){
                    cout << arr[n-1];
                    return 0;
                }else{
                    cout << ans_min;
                    return 0;
                }
            }
            if(min > arr[i+j]){
                min = arr[i+j];
                cur = i + j;
                
            }
        }
        if(arr[cur]>ans_min){
            //cout << cur << " " << arr[cur]<< endl;
            ans_min = arr[cur];
        }
    }

    cout << ans_min;
    return 0;
}