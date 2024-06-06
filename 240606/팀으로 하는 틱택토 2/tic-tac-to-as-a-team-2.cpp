#include <iostream>
#include <string>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int arr[3][3];
    int ans[10][10] = {};
    string input;
    for(int i = 0; i < 3; i++){
        cin >> input;
        for(int j = 0; j < 3; j++){
            arr[i][j] = input[j]-48;
        }
    }


    for(int i = 0; i < 3; i++){
        int digits[10]={};
        for(int j = 0; j < 3; j++){
            digits[arr[i][j]]++;
        }
        int cnt = 0;
        for(int j = 0; j < 10; j++){
            if(digits[j]!=0){
                cnt++;
            }
        }
        if(cnt == 2){
            int afj[2] = {};
            int x = 0;
            for(int j = 0; j < 10; j++){
                if(digits[j]!=0){
                    afj[x++] = j;
                }
            }
            ans[afj[0]][afj[1]]++;
        }
    }

    for(int i = 0; i < 3; i++){
        int digits[10]={};
        for(int j = 0; j < 3; j++){
            digits[arr[j][i]]++;
        }
        int cnt = 0;
        for(int j = 0; j < 10; j++){
            if(digits[j]!=0){
                cnt++;
            }
        }
        if(cnt == 2){
            int afj[2] = {};
            int x = 0;
            for(int j = 0; j < 10; j++){
                if(digits[j]!=0){
                    afj[x++] = j;
                }
            }
            ans[afj[0]][afj[1]]++;
        }
    }

    //1,1 3,3
    int digits[10] = {};
    for(int i = 0; i < 3; i++){
        digits[arr[i][i]]++;
    }
    int cnt = 0;
    for(int i = 0; i < 10; i++){
        if(digits[i]!=0){
            cnt++;
        }
    }
    if(cnt == 2){
            int afj[2] = {};
            int x = 0;
            for(int j = 0; j < 10; j++){
                if(digits[j]!=0){
                    afj[x++] = j;
                }
            }
            ans[afj[0]][afj[1]]++;
        }
    //1,3 3,1
    int digits1[10] = {};
    for(int i = 0; i < 3; i++){
        digits1[arr[i][2-i]]++;
    }
    cnt = 0;
    for(int i = 0; i < 10; i++){
        if(digits1[i]!=0){
            cnt++;
        }
    }
   if(cnt == 2){
            int afj[2] = {};
            int x = 0;
            for(int j = 0; j < 10; j++){
                if(digits[j]!=0){
                    afj[x++] = j;
                }
            }
            ans[afj[0]][afj[1]]++;
        }

    int ans_cnt = 0;

    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            if(ans[i][j]!=0){
                ans_cnt++;
            }
        }
    }
    cout << ans_cnt;
    return 0;
}