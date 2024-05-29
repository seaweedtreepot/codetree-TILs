#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n,k,bomb = -1;
    int arr[100];

    cin >> n >> k;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++){
        for(int j = i+1; j <= k+i; j ++){
            if(arr[i]==arr[j] && arr[i]>bomb){
                bomb = arr[i];
            }
        }
    }
    cout << bomb;
    return 0;
}