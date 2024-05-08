#include <iostream>
#include <string>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    string a;
    cin >> a;
    int n=0;
    int prod = 1;
    int max = 0;
    
    for(int i =0; i < a.length() ; i++){
        string cstr = a; int cur =0;
        prod =1;
        n=0;
        if(a[i]=='0'){
            cstr[i]='1';
        }else{
            cstr[i]='0';
        }
        for(int j = a.length()-1; j>=0; j--){
            if(cstr[j]=='0'){
                cur = 0;
            }else{
                cur = 1;
            }
            n+= cur * prod;
            prod *=2;
        }
        if(n>max){
            max = n;
            //cout << max;
        }
        
    }

    cout << max;
    return 0;
}