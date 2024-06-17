#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    char c;
    int s;
    int A=0,B=0,C=0;
    int status = 0;
    int cnt = 0;
    for(int i = 0; i < n; i++){
        cin >> c >> s;
        if(c=='A'){
            A += s;
        }else if(c=='B'){
            B += s;
        }else if(c=='C'){
            C += s;
        }
        if(A>B && A>C){ //1st = a
            if(status!=1){
                status = 1;
                cnt++;
            }
        }else if(B>A && B>C){//1st = B
            if(status!=2){
                status = 2;
                cnt++;
            }
        }else if(C>A && C>B){//1st = c
            if(status!=3){
                status = 3;
                cnt++;
            }
        }else if(A==B && B > C){//1st = ab
            if(status!=4){
                status = 4;
                cnt++;
            }
        }if(A==C && A>B){//1st = ac
            if(status!=5){
                status = 5;
                cnt++;
            }
        }else if(B==C && C>A){//1st = bc
            if(status!=6){
                status = 6;
                cnt++;
            }
        }else if(A==B && A==C){//1st = abc
            if(status!=0){
                status = 0;
                cnt++;
            }
        }
    }   

    cout << cnt;
    return 0;
}