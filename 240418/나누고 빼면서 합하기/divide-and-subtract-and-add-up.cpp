#include <iostream>
using namespace std;
void CustomSum(int arr[],int m){
    int sum = 0;
    while(m!=1){
        sum += arr[m-1];
        if(m%2==0){
            m/=2;
        }else{
            m-=1;
        }
    }
    sum += arr[0];
    cout << sum;
}
int main() {
    // 여기에 코드를 작성해주세요.
    int n,m;
    int arr[100];

    cin >> n >> m;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    CustomSum(arr,m);
    return 0;
}