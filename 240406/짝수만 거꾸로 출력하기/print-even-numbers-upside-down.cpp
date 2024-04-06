#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int arr[100];
    int cnt=0;

    cin >> n;
    int temp;
    for(int i = 0; i < n; i++){
        cin >> temp;
        if(temp%2==0){
            arr[cnt++] = temp;
        }
    }

    for(int i = --cnt; i > -1; i--){
        cout << arr[i] << " ";
    }
    return 0;
}