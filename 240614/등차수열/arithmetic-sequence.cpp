#include <iostream>
#include <algorithm>
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
    sort(arr,arr+n);

    for(int i = 0; i < n; i++){
        //cout << arr[i] << " ";
    }
    //cout << endl;
    int max= 0;
    for(int k = 01; k <= 100; k++){
        int cnt= 0;
        for(int i = 0; i<n; i++){
            for(int j = i+1; j < n; j++){
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