#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int arr[100];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int tarr[100];
    for(int i = 0; i < n; i++){
        tarr[i]=arr[i];
    }
    sort(arr,arr+n);

    

    int max=-1;
    for(int i = 0; i < n; i++){
        if(arr[i]!=arr[0]){
            max = arr[i];
            if(arr[i]==arr[i+1]){
                cout << -1;
                return 0;
            }
        }
    }

    if(max==-1){
        cout << max;
        return 0;
    }
    else{
        for(int i = 0; i <n; i++){
            if(arr[i]==max){
                cout << i+1;
            }
        }
    }
    return 0;
}