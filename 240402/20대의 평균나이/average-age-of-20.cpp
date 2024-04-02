#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int age;
    double cnt =0;
    int sum=0;
    cout<<fixed;
    cout.precision(2);
    while(1){
        cin >> age;
        if(age < 20 || age>29){
            cout << sum/cnt;
            break; 
        }
        sum+=age;
        cnt++;
    }
    return 0;
}