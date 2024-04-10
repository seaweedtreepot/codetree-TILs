#include <iostream>
#include <string>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    string a;
    cin >> a;
    bool flag = false;
    if(a.find("ee")!=string::npos){
        flag = true;
    }

    if(flag){
        cout << "Yes" <<" ";
    }else{
        cout << "No" << " "; 
    }
    flag =false;
    for(int i = 0; i < a.length()-1; i++){
        if(a.substr(i,2)=="ab"){
            flag = true;
        }
    }
if(flag){
        cout << "Yes" ;
    }else{
        cout << "No" ; 
    }

    return 0;
}