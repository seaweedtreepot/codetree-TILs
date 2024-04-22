#include <iostream>
#include <functional>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    string str1,str2;
    cin >> str1 >> str2;
    sort(str1.begin() ,str1.end() );
    sort(str2.begin() , str2.end());

    bool flag = true;

    for(int i = 0; i < str1.length();i++){
        if(str1[i]!=str2[i]){
            flag = false;
            break;
        }
    }

    cout << (flag?"Yes":"No");
    
    return 0;
}