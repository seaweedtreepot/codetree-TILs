#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int main() {
    // 아이디어 : [0+i , 17 + i) 의 구간으로 해서 맞춰 끼워넣기.
    int n;
    cin >> n;
    int arr[1000];
    for(int i = 0; i < n; i++){ 
        cin >> arr[i];
    }
    
    int min = INT_MAX;
    for(int i = 0; i < 94; i++){
        int price = 0;
        for(int j = 0; j < n; j++){
            if(i > arr[j]){
                int a = abs(arr[j]-i);
                price += a * a;
            }else if(arr[j]> i+17){
                int a = abs(arr[j]-(i+17));
                price += a * a;
            }
        }
        if(min > price){
            min = price;
        }
    }

    cout << min;
    return 0;
}