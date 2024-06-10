#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int arr[1000];
    cin >> n;
    for(int i = 0; i < n-1; i++){
        cin >> arr[i];
    }

    int ans_arr[1000];
    for(int j = 1; j <= n; j++){
        bool checking[1001] = {};
        bool flag = true;
        for(int i = 0; i < n; i++){
            if(i==0){
                ans_arr[i] = j;
                checking[j]=true;
            }else{
               ans_arr[i] = arr[i-1] - ans_arr[i-1];
            }
        }
        //cout << endl;
        for(int i = 1; i <= n; i++){
            if(ans_arr[i]>=1 && ans_arr[i]<=n){
                
            }else{
                break;
            }
            checking[ans_arr[i]] = true;
        }

        for(int i = 1; i<=n;i++){
            if(checking[i]!=true){
                flag =false;
            }
        }
        if(flag){
            for(int q = 0; q < n; q++){
                cout << ans_arr[q] << " ";
            }
            return 0;
        }
    }
    return 0;
}