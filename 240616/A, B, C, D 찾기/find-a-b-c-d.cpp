#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int a,b,c,d;
    int arr[15];

    for(int i = 0; i < 15; i++){
        cin >> arr[i];
    }

    sort(arr,arr+15);

    a = arr[0];
    b = arr[1];
    c = arr[2];
    d = arr[14]-a-b-c;

    cout << a<< " " << b << " "<< c << " "<<d ;
    return 0;
}