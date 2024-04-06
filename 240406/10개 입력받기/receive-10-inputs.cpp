#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int arr[10] ={};
    int sum=0;
    int cnt =0;
    cout<<fixed;
    cout.precision(1);
    for(int i = 0; i < 10; i++){
        cin >> arr[i];
        if(arr[i]==0){
            break;
        }else{
            cnt++;
            sum += arr[i];
        }
        
    }

    cout << sum << " " << (double)sum/cnt;
    return 0;
}