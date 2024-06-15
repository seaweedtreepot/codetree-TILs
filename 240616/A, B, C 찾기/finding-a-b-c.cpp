#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int arr[7];
    for(int i = 0; i < 7; i++){
        cin >> arr[i];
    }
    sort(arr,arr+7);

    int a,b,c;
    a = arr[0];
    b = arr[1];
    if(a+b == arr[2]){
        c= arr[3];
    }else {
        c = arr[2];
    }

    cout << a <<" "<< b <<" "<< c;
    return 0;
}