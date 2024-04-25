#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n,k;
    cin >> n >> k;
    int arr[100] = {};

    int cur1, cur2;
    for(int i = 0; i < k; i++){
        cin >>  cur1 >> cur2;
        for(int j = cur1; j <= cur2; j++){
            arr[j]++;
        }
    }

    int max = 0;

    for(int i = 0; i < n; i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }
    cout << max;
    return 0;   
}