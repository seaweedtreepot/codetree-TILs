#include <functional>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int arr[2000];
    for(int i = 0 ; i < 2*n; i++){
        cin >> arr[i];
    }
    sort(arr,arr+2*n);
    int a[1000];
    for(int i = 0; i < n; i++){
        a[i] = arr[i]+ arr[2*n-1-i];
    }
    sort(a,a+n,greater<int>()); 
    cout << a[0];
    

    return 0;
}