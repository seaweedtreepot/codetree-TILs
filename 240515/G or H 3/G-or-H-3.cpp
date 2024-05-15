#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n,k,c;

    cin >>  n >> k;
    int arr[101]={};
    char a;
    for(int i = 0 ; i < n; i++){
        cin >> c >> a;
        if(a=='G'){
            arr[c]=1;
        }else{
            arr[c]=2;
        }
    }
    int max= 0;
    for(int i = 1; i <= 101-k; i++){
        int sum = 0;    
        for(int j = i; j <= i+k;j++){
            sum += arr[j];
        }
        if(sum > max){
            max = sum;
        }
    }

    cout << max;
    return 0;
}