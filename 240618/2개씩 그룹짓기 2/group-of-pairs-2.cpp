#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    int arr[200000];
    for(int i = 0; i < 2*n; i++){
        cin >> arr[i];
    }
    sort(arr,arr+2*n);
    int min = 1000000000;
    for(int i = 0; i < n; i++){
        if(arr[n+i]-arr[i] < min){
            min = abs(arr[n+i]-arr[i]);
        }
        //cout << arr[n+i] << " " << arr[i] <<endl;
    }

    cout << min;
    return 0;
}