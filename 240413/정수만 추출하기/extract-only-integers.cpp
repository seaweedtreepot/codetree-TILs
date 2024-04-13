#include <iostream>
#include <string>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    string a;
    string temp = "";
    int sum =0;
    cin >> a;
    for(int i = 0; i < a.length();i++){
        if(a[i]<'0' || a[i]>'9'){
            break;
        }else{
            temp += a[i];
        }
    }
    sum += stoi(temp);
    //cout << a << endl;
    cin >> a;
    temp = "";
    for(int i = 0; i < a.length();i++){
        if(a[i]<'0' || a[i]>'9'){
            break;
        }else{
            temp+= a[i];
        }
    }
    sum += stoi(temp);
    cout << sum;
    return 0;
}