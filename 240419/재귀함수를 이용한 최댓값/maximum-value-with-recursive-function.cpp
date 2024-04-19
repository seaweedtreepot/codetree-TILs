#include <iostream>
using namespace std;

int Max(int N, int arr[]){
  if(N==1){
    return arr[0];
  }
  int temp = Max(N-1,arr);
    return (temp>arr[N-1]?temp:arr[N-1]);
}
int main() {
    // 여기에 코드를 작성해주세요.
    int N;
    int arr[100];
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> arr[i];
    }

    cout << Max(N,arr);
    return 0;
}