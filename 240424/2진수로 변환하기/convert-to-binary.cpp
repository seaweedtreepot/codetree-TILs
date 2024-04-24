#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int arr[20] = {};
    int i = 0;
    while(n!=0){
        arr[i++]=n%2;
        n/=2;
    }

    for(int j = i-1; j >= 0; j--){
        cout << arr[j];
    }
    if(n==0){
        cout << 0;
    }
    return 0;
}