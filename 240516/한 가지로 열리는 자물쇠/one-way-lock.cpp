#include <iostream>
#include <cstdlib>
using namespace std;

bool isOK(int key,int a,int N){
    return abs(key-a)<=2;
}
int main() {
    // 여기에 코드를 작성해주세요.
    int N;
    int a,b,c;
    cin >> N >> a >> b >> c;
    

    int cnt =0 ;
    for(int i = 1; i <= N; i++){
        for(int j = 1; j <= N; j++){
            for(int k = 1; k <= N; k++){
                if(isOK(a,i,N)||isOK(b,j,N)||isOK(c,k,N)){
                    cnt++;
                }
            }
        }
    }

    cout <<cnt;
    return 0;
}