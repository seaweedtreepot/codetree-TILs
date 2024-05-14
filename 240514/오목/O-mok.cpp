#include <iostream>
using namespace std;

bool IsWin1(int arr[][19],int a,int b){
    bool flag = true;
    for(int i = b;i < 5;i++){
        if(arr[a][i]!=arr[a][b]){
            flag = false;
        }
    }
    return flag;
}
bool IsWin2(int arr[][19],int a,int b){
    bool flag = true;
    for(int i = a;i < 5;i++){
        if(arr[a][b]!=arr[i][b]){
            flag = false;
        }
    }
    return flag;
}
bool IsWin3(int arr[][19],int a,int b){
    bool flag = true;
    int j=b;
    for(int i = a;i < 5;i++){
        if(arr[a][b]!=arr[i][j++]){
            flag = false;
        }
    }
    return flag;
}
int main() {
    // 여기에 코드를 작성해주세요.
    int arr[19][19];
    int cnt = 0;
    for(int i = 0; i < 19; i++){
        for(int j = 0; j < 19;j++){
            cin >> arr[i][j];
        }
    }
    int n= 19;
    int ans_col=0,ans_row=0;
    for(int i = 0; i < n-4; i++){
        for(int j = 0; j < n-4; j++){
            if(arr[i][j]==arr[i][j+1]&& arr[i][j]!=0){
                if(IsWin1(arr,i,j)){
                    cnt = arr[i][j];
                    ans_col=i+1;
                    ans_row=j+3;
                    //cout << i << " "<<j<<endl;  
                    break;
                }
            }else if(arr[i][j]==arr[i+1][j] &&arr[i][j]!=0){
                if(IsWin2(arr,i,j)){
                    cnt = arr[i][j];
                    ans_col= i+3;
                    ans_row= j+1;
                    break;
                }
            }else if(arr[i][j]==arr[i+1][j+1] &&arr[i][j]!=0){
                if(IsWin3(arr,i,j)){
                    cnt = arr[i][j];
                    ans_col = i;
                    ans_row = j;
                    break;
                }
            }
        
        }
    }

    //white = 2 black = 1 draw = 0
    
    cout << cnt << endl;
    cout << ans_col << " " <<ans_row;
    return 0;
}