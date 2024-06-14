#include <iostream>
//#include <algorithm>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int a;
    int arr[101]={};
    for(int i = 0; i < n; i++){
       cin >> arr[i];
       
    }
    //sort(arr,arr+n);
    int max= 0;
    for(int k = 1; k <= 100; k++){
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
        }
    }

    cout << max;
    return 0;
}