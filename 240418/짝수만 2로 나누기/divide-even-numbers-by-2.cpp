#include <iostream>
using namespace std;
void DivideEven(int arr[],int N){
    for(int i = 0; i < N;i++){
        if(arr[i]%2==0){
            arr[i]/=2;
        }
    }
}
int main() {
    // 여기에 코드를 작성해주세요.
    int N;
    int arr[50];
    cin >> N;

    for(int i = 0; i < N; i++){
        cin >> arr[i];
    }

    DivideEven(arr,N);

    for(int i = 0; i < N; i++){
        cout << arr[i]<< " ";
    }
    return 0;
}