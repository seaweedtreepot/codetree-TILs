#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int arr[10];
    int cnt=0;

    int a;

    for(int i = 0; i< 10; i++){
        cin >> a;
        if(a >= 250){
            break;
        }
        cnt++;

        arr[i] = a;
    }

    cout.precision(1);
    cout << fixed;
    int sum =0;
    for(int i = 0; i < cnt; i++){
        sum += arr[i];
    }
    cout << sum << " " << (double)sum/cnt;
    return 0;
}