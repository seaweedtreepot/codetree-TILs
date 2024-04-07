#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int arr[7];
    int a;
    for(int i = 0; i < 10; i++){
        cin >> a;
        arr[a]++;
    }

    for(int i = 1; i < 7; i++){
        cout << i << " - " << arr[i] << endl;
    }
    return 0;
}