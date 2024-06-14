#include <iostream>
#include <utility>
#include <cstdlib>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int t,a,b,c,x;
    int spec=0;
    cin >> t >> a >> b;
    bool s[1001]={};
    bool n[1001]={};
    char t1;
    int t2;
    for(int i = 0; i< t; i++){
        cin >> t1 >> t2; 
        if(t1 == 'S'){
            s[t2] = true;
        }else{
            n[t2] = true;
        }
    }

    for(int i = a; i <= b; i++){
        int min_a=1000,min_b=1000;
        for(int j = 0; j < 1001;j++){
            if(s[j]){
                if(abs(i-j)<min_a){
                    min_a = abs(i-j);
                }
            }else if(n[j]){
                if(abs(i-j)<min_b){
                    min_b = abs(i-j);
                }
            }
        }
        if(min_a <= min_b){
            spec++;
        }
    }

    cout << spec;
    return 0;
}