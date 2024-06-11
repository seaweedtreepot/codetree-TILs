#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int arr[1000];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    sort(arr,arr+n);
    int price = 0;
    for(int i = 0; i < n/2+1; i++){
        if(abs(arr[i]-arr[n-i-1])>17){
            int a = (abs(arr[i]-arr[n-i-1])-17)/2;
            int b = (abs(arr[i]-arr[n-i-1])-17) - a;
            price += a * a + b* b;
        }
    }
    cout << price ;
    //1 4 20 21 24
    return 0;
}