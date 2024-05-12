#include <iostream>
#include <string>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n,cnt = 0;
    string a;
    cin >> a;
    n = a.length();

    for(int i = 0; i < n-1;i++){
        if(a[i]=='(' && a[i+1]=='('){
            for(int j = i+1; j < n-1;j++){
                if(a[j]==')' && a[j+1]==')'){        
                    cnt++;
                }
            }
        }
    }
    cout << cnt;
    return 0;
}