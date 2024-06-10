#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n,k,arr[100];
    cin >> n >> k;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int ans = arr[0];
    int cur = 0;
    while(cur < n){
        int min = 101;
        int jump;
        for(int j = cur+1; j <= k+cur;j++){
            
            if(arr[j]<min){
                jump = j;
                min = arr[j];
            }
        }
        if(arr[jump] > ans){
            ans = arr[jump];
        }
        cur = jump;
        //cout << cur << endl;
    }
    return 0;
}