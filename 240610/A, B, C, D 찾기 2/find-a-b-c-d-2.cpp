#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int arr[15];
    
    for(int i = 0; i < 15;i++){
        cin >> arr[i];
    }
    sort(arr,arr+15);
    for(int i = 0; i < 15; i++){
        //cout << arr[i] << " ";
    }
    int a= arr[0],b=arr[1];
    int c,d;
    for(int i = 2; i < 15; i++){
        if(arr[i]== a+b){
            arr[i]=41;
            break;
        }
    }
    sort(arr,arr+15);
    c = arr[2];

    for(int i = 3; i < 15;i++){
        if(b+c==arr[i]){
            arr[i]=41;
            break;
        }
    }

    for(int i = 3; i < 15; i++){
        if(c+a == arr[i]){
            arr[i]=41;
            break;
        }
    }
    sort(arr,arr+15);
    d = arr[3];
    cout << a << " " <<b <<" "<<c <<" " << d;
    return 0;
}