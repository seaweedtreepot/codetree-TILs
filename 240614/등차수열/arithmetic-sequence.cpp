#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int a;
    int arr[101]={};
    bool ar[101] = {};
    for(int i = 0; i < n; i++){
       cin >> arr[i];
       ar[arr[i]] = true;
       
    }
    int max= 0;
    for(int k = 1; k <= 100; k++){
        if(ar[k]) continue;
        int cnt= 0;
        for(int i = 0; i<n; i++){
            for(int j = i; j < n; j++){
                if(k-arr[j] == arr[i]-k){
                    cnt++;
                    //cout << k << endl;
                }
            }
        }
        if(max< cnt){
            max = cnt;
            //cout <<k << ": "<< cnt << endl;
        }
    }

    cout << max;
    return 0;
}