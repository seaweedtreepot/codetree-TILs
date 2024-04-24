#include <iostream>
#include <algorithm>
using namespace std;

 
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int arr[1000];
    int arr2[1000];
    for(int i = 0; i < n ;i++){
        cin >> arr[i];
        arr2[i]=arr[i];
    }
    sort(arr,arr+n);
    int ans[1000];
    //1 1 2 3 6 7 30
    //3 1 6 2 7 30 1
    for(int i = 0; i < n; i++){
        for(int j =0; j < n; j++){
            if(arr[j]==arr2[i]){
                ans[i] = j+1;
                arr[j]=-1;
                break;
            }
        }
    }




    for(int i = 0; i < n; i++){
        cout << ans[i] << " ";
    }
    return 0;
}