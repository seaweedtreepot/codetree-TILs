#include <iostream>
#include <cstdlib>
#include <algorithm>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int arr[100000];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    sort(arr,arr+n);

    
    int m = arr[0] * arr[1] * arr[n-1];
    int p = arr[n-1] * arr[n-2] * arr[n-3];
    int MAX = max(m,p);

    cout << MAX;
    return 0;
}