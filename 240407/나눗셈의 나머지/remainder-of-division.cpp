#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int a ,b;
    cin >> a >> b;
    int arr[10]={};
    while(a > 1){
        arr[a%b]++;
        a/=b;
       // cout << a << endl;
    }

   
    int sum =0;
    for(int i = 0; i < b;i++){
        sum += arr[i]*arr[i]; 
    }
    cout << sum;
    return 0;
}