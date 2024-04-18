#include <iostream>
#include <string>
using namespace std;

bool IsPalindrome(string &a){
    string temp = a;
    for(int i = 0; i < a.length()/2;i++){
        char temp = a[i];
        a[i] = a[a.length()-1-i];
        a[a.length()-1-i]=temp;
    }
    return (a==temp);
}
int main() {
    // 여기에 코드를 작성해주세요.
    string A;
    cin >> A;

    cout << (IsPalindrome(A)?"Yes":"No");


    return 0;
}