#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <climits>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n,k;
    int arr[100];
    int min = INT_MAX;
    cin >> n >> k;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }


    for(int i = 0; i < 10001-k;i++){
        //cout << 1 <<endl;
        int cnt = 0;
        for(int j = 0; j < n; j++){
            //cout << 2 << endl;
            if(i > arr[j]){
                //cout << 3 << endl;
                cnt += abs(i-arr[j]);
            }else if(arr[j]>i+k){
                //cout << 4 << endl;
                cnt += abs(i+k - arr[j]);
            }
        }

        if(min > cnt){
            //cout << 5 << endl;
            min = cnt;
        }
    }

    cout << min;
    return 0;
}