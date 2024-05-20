#include <iostream>
using namespace std;

bool simul(int a, int b, int n){
    int temp = a;
    if(a==b){
        return true;
    }
    for(int i = 0; i < 2; i++){
        a--;
        if(a==0){
            a=n;
        }
        if(a==b){
            return true;
        }
    }
    a=temp;
    for(int i = 0; i < 2; i++){
        a++;
        if(a==(n+1)){
            a=1;
        }
        if(a==b){
            return true;
        }
    }
    return false;
}

bool isOpen(int arr[],int a, int b, int c,int n){
    bool flag = true;
    int t[3] = {a,b,c};
    int cnt = 0;
    for(int i = 0; i < 3; i++){
        if(simul(arr[i],t[i],n)){
            cnt++;
        }
    }
    return cnt==3;
}
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int pwd1[3];
    int pwd2[3];
    int cnt = 0;


    cin >> n;
    for(int i = 0; i < 3; i++){
        cin >> pwd1[i] ;
    }
    for(int i = 0; i < 3; i++){
        cin >> pwd2[i];
    }


    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            for(int k = 1; k <= n; k++){
                if(isOpen(pwd1,i,j,k,n)&&isOpen(pwd2,i,j,k,n)){
                    cnt++;
                }
                else if(isOpen(pwd2,i,j,k,n)){
                    cnt++;
                }else if(isOpen(pwd1,i,j,k,n)){
                    cnt++;
                }
        }
    }
    }
    cout << cnt;
    return 0;
}