#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    cout << fixed;
    cout.precision(1);
    int n;
    cin >> n;
    double arr[5];
    double a;
    double sum = 0;
    for(int i = 0; i < n ;i++){
        cin >> a;
        arr[i] = a;
    }
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }

    cout << sum/n << endl;

    if(sum/n >=4.0){
        cout << "Perfect" ;
    }
    else if(sum/n >=3.0){
        cout << "Good";
    }
    else{
        cout << "Poor";
    }
    return 0;
}