#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int arr[100]={-1};
    int n; cin >> n;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int arr_e[50] ={-1};
    int cnt = 0;
    for(int i = 0; i < n; i++){
        if(arr[i]%2==0 && arr[i]!=0){
            arr_e[cnt++] = arr[i];
        }
    }

    for(int i = 0; i < cnt; i++){
        cout << arr_e[i] <<" ";
    }
    return 0;
}