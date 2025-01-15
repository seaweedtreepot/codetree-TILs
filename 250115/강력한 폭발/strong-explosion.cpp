#include <iostream>

using namespace std;

int n;
int large = 0;
int grid[20][20];
int bomb_gird[20][20];

void bomb_put(int type, int num1, int num2){
    if(type == 1){
        bomb_gird[num1][num2]++;
        if(num1 > 0){
            bomb_gird[num1-1][num2]++;
        }
        if(num1 > 1){
            bomb_gird[num1-2][num2]++;
        }
        if(num1 < n-1){
            bomb_gird[num1+1][num2]++;
        }
        if(num1 < n-2){
            bomb_gird[num1+2][num2]++;
        }
    }else if (type ==2){
        bomb_gird[num1][num2]++;
        if(num1 >0){//upside
            bomb_gird[num1-1][num2]++;
        }
        if(num1 < n-1){//down side
            bomb_gird[num1+1][num2]++;
        }
        if(num2 >0){ //left side
            bomb_gird[num1][num2-1]++;
        }
        if(num2 < n-1 ){//right side
            bomb_gird[num1][num2+1]++;
        }
    }else if (type ==3){
        bomb_gird[num1][num2]++;
        if(num1 > 0 && num2 >0){
            bomb_gird[num1-1][num2-1]++; //LU
        }
        if(num1 < n-1 && num2 < n-1){
            bomb_gird[num1+1][num2+1]++;//RD
        }
        if(num1 > 0 && num2 < n-1){
            bomb_gird[num1-1][num2+1]++;//RD
        }
        if(num1 < n-1 && num2 > 0){
            bomb_gird[num1+1][num2-1]++;//LD
        }
    }
}
void bomb_pop(int type,int num1, int num2){
    if(type == 1){
        bomb_gird[num1][num2]--;
        if(num1 > 0){
            bomb_gird[num1-1][num2]--;
        }
        if(num1 > 1){
            bomb_gird[num1-2][num2]--;
        }
        if(num1 < n-1){
            bomb_gird[num1+1][num2]--;
        }
        if(num1 < n-2){
            bomb_gird[num1+2][num2]--;
        }
    }else if (type ==2){
        bomb_gird[num1][num2]--;
        if(num1 >0){//upside
            bomb_gird[num1-1][num2]--;
        }
        if(num1 < n-1){//down side
            bomb_gird[num1+1][num2]--;
        }
        if(num2 >0){ //left side
            bomb_gird[num1][num2-1]--;
        }
        if(num2 < n-1 ){//right side
            bomb_gird[num1][num2+1]--;
        }
    }else if (type ==3){
        bomb_gird[num1][num2]--;
        if(num1 > 0 && num2 >0){
            bomb_gird[num1-1][num2-1]--; //LU
        }
        if(num1 < n-1 && num2 < n-1){
            bomb_gird[num1+1][num2+1]--;//RD
        }
        if(num1 > 0 && num2 < n-1){
            bomb_gird[num1-1][num2+1]--;//RD
        }
        if(num1 < n-1 && num2 > 0){
            bomb_gird[num1+1][num2-1]--;//LD
        }
    }
}
void checker(int num1,int num2){
    //cout << num1 << " " << num2 << endl;
    if(num1==n){//끝까지 도달하면 bomb_grid에 새겨진 흔적을 셈
        int cnt = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(bomb_gird[i][j]){
                    cnt++;
                }
            }    
        }

        if(large < cnt){ //large 결정하기
            large = cnt;
        }
        return;
    }

    if(grid[num1][num2]!=0){//폭탄을 설치해야함
        for(int i = 1; i<=3; i++){
            bomb_put(i,num1,num2);
            if(num2==n-1){//한줄의 끝까지 도달하면 다음줄 넘김
                checker(num1+1,0);
            }else{
                checker(num1,num2+1);
            }
            bomb_pop(i,num1,num2);
        }
    }else{
        if(num2==n-1){//한줄의 끝까지 도달하면 다음줄 넘김
                checker(num1+1,0);
            }else{
                checker(num1,num2+1);
            }
    }

}
int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            bomb_gird[i][j] = false;
        }
    }
    // Write your code here!
    checker( 0, 0);



    cout << large;
    return 0;
}

