#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n;cin >> n;
    int b; cin >> b;
    int arr[250];
    int idx = 0;
    while(n!=0){
        arr[idx++] = n%b;
        n/=b;
    }
    
    for(int i = idx-1; i >=0; i--){
        cout << arr[i];
    }
    return 0;
}