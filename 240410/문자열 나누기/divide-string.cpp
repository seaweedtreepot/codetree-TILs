#include <iostream>
#include <string>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int a;
    cin >> a;
    string arr="";
    string temp;

    for(int i = 0; i < a; i++){
        cin >> temp;
        arr+= temp;
    }

    for(int i = 0; i < arr.length(); i++){
        if((i+1)%5==0){
            cout << arr[i] << endl;
        }else{
            cout << arr[i];
        }
    }

    return 0;
}