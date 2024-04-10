#include <iostream>
#include <string>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int max=0, min=20;
    string str1, str2, str3;
    cin >> str1 >> str2 >> str3;
    if(str1.length() > str2.length()){
        if(str1.length() > str3.length()){
            max = str1.length();
        }else{
            max = str3.length();
        }
    }else{
        if(str2.length() > str3.length()){
            max = str2.length();
        }else{
            max = str3.length();
        }
    }
    if(str1.length() < str2.length()){
        if(str1.length() < str3.length()){
            min = str1.length();
        }else{
            min = str3.length();
        }
    }else{
        if(str2.length() < str3.length()){
            min = str2.length();
        }else{
            min = str3.length();
        }
    }

    cout << max - min;
    return 0;
}