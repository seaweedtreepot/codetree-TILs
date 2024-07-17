#include <iostream>
using namespace std;

void fun(int arr[],int n){
    bool sorted = true;
    do{
        sorted = true;
        for(int i = 0; i < n-1; i++){
            if(arr[i]>arr[i+1]){
                sorted = false;
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
                sorted = false;
            }
        }
    }while(!sorted);


    for(int i = 0; i < n ; i++){
        cout << arr[i] << " ";
    }
    return;
}
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int arr[100];
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    fun(arr,n);
    
    return 0;
}